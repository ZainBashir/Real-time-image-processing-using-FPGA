----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:59:51 11/14/2017 
-- Design Name: 
-- Module Name:    Cache_memory - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.all;
use IEEE.STD_LOGIC_unsigned.ALL;
--
--library IEEE;
--use IEEE.STD_LOGIC_1164.ALL;
--use IEEE.STD_LOGIC_unsigned.ALL;
--use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Cache_memory is
generic (Bus_width : integer:= 8);
port (reset, clk : in std_logic; -- reset and clock 
		d_in : in std_logic_vector(Bus_width-1 downto 0); ---- input to the first flip fliop
		pixel1,pixel2,pixel3,pixel4,pixel5,pixel6,pixel7,pixel8,pixel9 : out std_logic_vector (Bus_width-1 downto 0) ; 
		d_out_dammy,sig1_dummy,sig2_dummy :out std_logic_vector (Bus_width-1 downto 0);
		neighborhood_ready : out std_logic;
		DATA_READY : in std_logic
		
		);

end Cache_memory;

architecture Behavioral of Cache_memory is
signal EN : std_logic := '1';
signal neighborhood_ready1 : std_logic := '0';
signal prog_full1,prog_full2, empty1, full1, empty2, full2,wr_en1,rd_en1 ,wr_en2,rd_en2 :std_logic := '0';   -- signals to use with FIFO and flip fliop
signal prog_full_thresh1, prog_full_thresh2 : std_logic_vector(9 downto 0) := "00"&X"7B" ; --- signals to use in FIFO (flags that raise when the memory is full)
type pixel_cach_type is array (0 to 10) of std_logic_vector(7 downto 0);   -- type of array 
signal counter : std_logic_vector (9 downto 0) := "0000000000";
signal pixel_cach : pixel_cach_type;  -- ---  Signal to communicate from one component to the next
signal image_completed : std_logic := '0';

component reg_8b                        -- Our generic flip flop 
generic(Bus_Width: integer := 8);
    Port ( CLK : in  STD_LOGIC;
           RESET : in  STD_LOGIC;
           EN : in  STD_LOGIC;
           D : in  STD_LOGIC_VECTOR (Bus_Width - 1 downto 0);
           Q : out  STD_LOGIC_VECTOR (Bus_Width - 1 downto 0));
end component;

COMPONENT fifo_us                -- Our FIFO memory
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         din : IN  std_logic_vector(7 downto 0);
         wr_en : IN  std_logic;
         rd_en : IN  std_logic;
         prog_full_thresh : IN  std_logic_vector(9 downto 0);
         dout : OUT  std_logic_vector(7 downto 0);
         full : OUT  std_logic;
         empty : OUT  std_logic;
         prog_full : OUT  std_logic
        );
    END COMPONENT;
	 
--signal pix0 : std_logic_vector (7 downto 0);

begin

rd_en1 <= prog_full1 when
			((prog_full1 and empty1) = '0')
			else '0';

rd_en2 <= prog_full2 when
				(prog_full2 and empty2) = '0'
				else '0';




write_enable: process (CLK,RESET,DATA_READY)
 begin
		
		
		if falling_edge (DATA_READY)  then
			
			counter <= "0000000000";
			image_completed <= '1';
		end if;

if rising_edge(CLK) then     ----- needs correction bcz it is not taking the exact value
	
	
	
	if DATA_READY ='1' then
	
	counter <= counter + "0000000001";
	
			
			if counter = "0000000011" then
			wr_en1 <= '1';
			end if;
		
			
			if counter = "0010000011" then
			wr_en2 <= '1';
			end if;
		
			if counter = "100000011" then
			
			neighborhood_ready1<= '1';
			end if;
--

	
	end if;


		
		if DATA_READY ='0' and image_completed = '1' then

	counter <= counter + "0000000001";
	
			--if counter = "100000010" then
			if counter = "100000011" then
			neighborhood_ready1<= '0';
			end if;
	end if;
		
end if;

end process write_enable;
gen1: for i in 0 to 11 generate  --- generate a loop...runs 11 times (to instantiate 9 flip flops and 2 fifo memories)
		gen_if_1st: if i=0  generate 
			inst1: reg_8b              ----first flip flop in the line which takes in the first pixel as input
				generic map (Bus_Width)
				Port map( CLK =>CLK,
                    RESET =>reset,
                    EN     => EN,
						  D => d_in,
                    Q => pixel_cach(0)
						  );
						  
		end generate gen_if_1st; 
			
		gen_if_2st: if i>0 and i<3 generate 
			inst2: reg_8b  -- generate the next two flip flops (the input of the second one is the output of the first. similarly for the third)
				generic map (Bus_Width)
				Port map(CLK		=>CLK,
                    RESET		=>reset,
                    EN			=> EN,
						  D			=>pixel_cach(i-1),
                    Q			=>pixel_cach(i)
						  );
          end generate gen_if_2st;
			 
		gen_if_fifo1: if i=3  generate   --- generate the first fifo....  the output from the third flip flop is the input
			inst_fifo1: fifo_us
			PORT map(
						clk 					=>clk,
						rst					=>reset,
						din					=>pixel_cach(i-1),
						wr_en 				=>wr_en1,
						rd_en					=>rd_en1,
						prog_full_thresh  =>prog_full_thresh1, 
						dout					=>pixel_cach(i),
						full					=> full1,
						empty					=> empty1,
						prog_full			=>prog_full1 
						);
  
	end generate gen_if_fifo1;
			
		gen_if_3st: if i>3 and i<7 generate  --- generating the next three flip flops in the line
			inst3: reg_8b 
				generic map (Bus_Width)
				Port map(CLK 			=>CLK,
                    RESET			=>reset,
                    EN				=> EN,
						  D 				=> pixel_cach(i-1),						  
                    Q				=>pixel_cach(i)
						  );
          end generate gen_if_3st;
		
		gen_if_fifo2: if i=7  generate  --- generating the second flip flop
				inst_fifo2: fifo_us
				PORT map(
				clk					=> clk,
				rst					=> reset,
				din					=>pixel_cach(i-1),
				wr_en					=>wr_en2,
				rd_en					=>rd_en2,
				prog_full_thresh 	=>prog_full_thresh2, 
				dout					=>pixel_cach(i),
				full					=> full2,
				empty					=> empty2,
				prog_full 			=>prog_full2 
				
				);
		end generate gen_if_fifo2;  
   
		gen_if_4st: if i>7 and i<11 generate  -- generating the last three flip flops in the line
			inst4: reg_8b 
         generic map (Bus_Width)
			Port map( CLK =>CLK,
                    RESET		=>reset,
                    EN			=> EN,
						  D			=> pixel_cach(i-1),
                    Q			=> pixel_cach(i)
						  );
          end generate gen_if_4st;
end generate gen1;		 
--- Assigning the signals called pixels 1-9 the pixel values
neighborhood_ready <= neighborhood_ready1;
 pixel1 <= pixel_cach(10);
 pixel2 <= pixel_cach(9);
 pixel3 <= pixel_cach(8);
 pixel4 <= pixel_cach(6);
 pixel5 <= pixel_cach(5);
 pixel6 <= pixel_cach(4);
 pixel7 <= pixel_cach(2);
 pixel8 <= pixel_cach(1);
 pixel9 <= pixel_cach(0); 
 d_out_dammy <= d_in;
 sig1_dummy  <= pixel_cach(7);
 sig2_dummy  <= pixel_cach(3);
end Behavioral;

