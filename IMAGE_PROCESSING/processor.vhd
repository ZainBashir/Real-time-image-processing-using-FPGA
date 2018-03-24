----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:46:33 12/08/2017 
-- Design Name: 
-- Module Name:    processor - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity processor is
    Port ( pixel0 : in  STD_LOGIC_VECTOR (7 downto 0);
           pixel1 : in  STD_LOGIC_VECTOR (7 downto 0);
           pixel2 : in  STD_LOGIC_VECTOR (7 downto 0);
           pixel3 : in  STD_LOGIC_VECTOR (7 downto 0);
           pixel4 : in  STD_LOGIC_VECTOR (7 downto 0);
           pixel5 : in  STD_LOGIC_VECTOR (7 downto 0);
           pixel6 : in  STD_LOGIC_VECTOR (7 downto 0);
           pixel7 : in  STD_LOGIC_VECTOR (7 downto 0);
           pixel8 : in  STD_LOGIC_VECTOR (7 downto 0);
           d_out : out  STD_LOGIC_VECTOR (15 downto 0);
			  data_ready: in std_logic;
			  processed_data_ready: out std_logic;
			  CLK : in std_logic
			  );
end processor;

architecture Behavioral of processor is

	COMPONENT reg_12b
	PORT(
		CLK : IN std_logic;
		RESET : IN std_logic;
		EN : IN std_logic;
		D : IN std_logic_vector(11 downto 0);          
		Q : OUT std_logic_vector(11 downto 0)
		);
	END COMPONENT;
	
	COMPONENT adder_12b
  PORT (
    a : IN STD_LOGIC_VECTOR(11 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(11 DOWNTO 0);
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    s : OUT STD_LOGIC_VECTOR(12 DOWNTO 0)
  );
END COMPONENT;
	
	
	COMPONENT adder_13b
  PORT (
    a : IN STD_LOGIC_VECTOR(12 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(12 DOWNTO 0);
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    s : OUT STD_LOGIC_VECTOR(13 DOWNTO 0)
  );
END COMPONENT;

COMPONENT adder_14b
  PORT (
    a : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    s : OUT STD_LOGIC_VECTOR(14 DOWNTO 0)
  );
END COMPONENT;

COMPONENT adder_15b
  PORT (
    a : IN STD_LOGIC_VECTOR(14 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(14 DOWNTO 0);
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    s : OUT STD_LOGIC_VECTOR(15 DOWNTO 0)
  );
END COMPONENT;

COMPONENT multiplier
  PORT (
    clk : IN STD_LOGIC;
    a : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    p : OUT STD_LOGIC_VECTOR(11 DOWNTO 0)
  );
END COMPONENT;


component divider_new
	port (
	clk: in std_logic;
	rfd: out std_logic;
	dividend: in std_logic_vector(15 downto 0);
	divisor: in std_logic_vector(5 downto 0);
	quotient: out std_logic_vector(15 downto 0);
	fractional: out std_logic_vector(5 downto 0));
end component;

signal add1_out : std_logic_vector(12 downto 0);
signal add2_out : std_logic_vector(12 downto 0);
signal add3_out : std_logic_vector(12 downto 0);
signal add4_out : std_logic_vector(12 downto 0);
signal add5_out : std_logic_vector(13 downto 0);
signal add6_out : std_logic_vector(13 downto 0);
signal add7_out : std_logic_vector(14 downto 0);
signal add8_out : std_logic_vector(15 downto 0);
signal fifo1_out: std_logic_vector(11 downto 0);
signal fifo2_out: std_logic_vector(11 downto 0);
signal fifo3_out: std_logic_vector(11 downto 0);

signal mult1_out : std_logic_vector(11 downto 0);
signal mult2_out : std_logic_vector(11 downto 0);
signal mult3_out : std_logic_vector(11 downto 0);
signal mult4_out : std_logic_vector(11 downto 0);
signal mult5_out : std_logic_vector(11 downto 0);
signal mult6_out : std_logic_vector(11 downto 0);
signal mult7_out : std_logic_vector(11 downto 0);
signal mult8_out : std_logic_vector(11 downto 0);
signal mult9_out: std_logic_vector(11 downto 0);

signal reg1_out : std_logic_vector(11 downto 0);
signal reg2_out : std_logic_vector(11 downto 0);
signal reg3_out : std_logic_vector(11 downto 0);
signal reg4_out : std_logic_vector(11 downto 0);
signal reg5_out : std_logic_vector(11 downto 0);
signal reg6_out : std_logic_vector(11 downto 0);
signal reg7_out : std_logic_vector(11 downto 0);
signal reg8_out : std_logic_vector(11 downto 0);
signal reg9_out: std_logic_vector(11 downto 0);


signal a: std_logic_vector(3 downto 0) := "0001";
signal divider_out: std_logic_vector (15 downto 0);
--signal divider_out_temp: std_logic_vector (19 downto 0);

signal EN : std_logic := '1';
signal RESET : std_logic := '0';
signal tout_valid : std_logic;


type enables_type is array (0 to 6) of std_logic;   -- array type 

signal enables : enables_type := (others=>'0');  -- ---  Signal to communicate from one component to the next
signal state : std_logic_vector(7 downto 0) := "00000000";

signal pixel_counter : std_logic_vector(15 downto 0) := "0000000000000000";

signal divider_output_ready: std_logic;


begin
--
--delay: process(clk,data_ready)
--begin
--if data_ready = '1' then
--wait for 520 ns;
--processed_data_ready <= '1';
--
--end if;
--end process delay;


enable_ports : process(clk,reset)
begin

if falling_edge(clk) then

if data_ready = '1' then
		if pixel_counter >= "0011111110000011" then
			enables(6) <= '0';
		end if;
		pixel_counter <= pixel_counter + "0000000000000001";
	end if;
	
	if state = "00000000" and data_ready = '1' then
		enables(0) <= '1';
		state <= "00000001";
	elsif state = "00000001" then
		enables(1) <= '1';
		state <= "00000010";
	elsif state = "00000010" then
		enables(2) <= '1';
		state <= "00000011";
	elsif state = "00000011" then
		enables(3) <= '1';
		state <= "00000100";
	elsif state = "00000100" then
		enables(4) <= '1';
		state <= "00000101";
	elsif state = "00000101" then
		enables(5) <= '1';
		state <= "00000110";
	elsif state = "00000110" then
		if pixel_counter < "0011111110000011"  then
			enables(6) <= '1';
			state <= "00000000";
		end if;
		
--		if column = "01111110" and row = "01111110" then
--			enables <= (others=>'0');
--		end if;
	end if;

end if;




end process enable_ports;



gen1: for i in 1 to 2 generate  ---

gen_mult: if i = 1 generate
	multiplier1: multiplier
	PORT MAP (
    clk => clk,
    a => "0001",
    b => pixel0,
    p => mult1_out
  );
  
 
	multiplier2: multiplier
	PORT MAP (
    clk => clk,
    a => "0010",
    b => pixel1,
    p => mult2_out
  );
  
  
	multiplier3: multiplier
	PORT MAP (
    clk => clk,
    a => "0001",
    b => pixel2,
    p => mult3_out
  );
  
  
	multiplier4: multiplier
	PORT MAP (
    clk => clk,
    a => "0010",
    b => pixel3,
    p => mult4_out
  );
  
  
	multiplier5: multiplier
	PORT MAP (
    clk => clk,
    a => "0100",
    b => pixel4,
    p => mult5_out
  );
  
  
	multiplier6: multiplier
	PORT MAP (
    clk => clk,
    a => "0010",
    b => pixel5,
    p => mult6_out
  );
  
  
	multiplier7: multiplier
	PORT MAP (
    clk => clk,
    a => "0001",
    b => pixel6,
    p => mult7_out
  );
  
  
	multiplier8: multiplier
	PORT MAP (
    clk => clk,
    a => "0010",
    b => pixel7,
    p => mult8_out
  );
  
  
	multiplier9: multiplier
	PORT MAP (
    clk => clk,
    a => "0001",
    b => pixel8,
    p => mult9_out
  );
  
  end generate gen_mult;
  
  gen_FF: if i = 2 generate
	reg_16b_1: reg_12b PORT MAP(
		CLK => clk,
		RESET => RESET,
		EN => enables(0),
		D => mult1_out,
		Q => reg1_out
	);
	
	reg_16b_2: reg_12b PORT MAP(
		CLK => clk,
		RESET => RESET,
		EN => enables(0),
		D => mult2_out,
		Q => reg2_out
	);
	
	reg_16b_3: reg_12b PORT MAP(
		CLK => clk,
		RESET => RESET,
		EN => enables(0),
		D => mult3_out,
		Q => reg3_out
	);
	
	reg_16b_4: reg_12b PORT MAP(
		CLK => clk,
		RESET => RESET,
		EN => enables(0),
		D => mult4_out,
		Q => reg4_out
	);
	
	reg_16b_5: reg_12b PORT MAP(
		CLK => clk,
		RESET => RESET,
		EN => enables(0),
		D => mult5_out,
		Q => reg5_out
	);
	
	reg_16b_6: reg_12b PORT MAP(
		CLK => clk,
		RESET => RESET,
		EN => enables(0),
		D => mult6_out,
		Q => reg6_out
	);
	
	reg_16b_7: reg_12b PORT MAP(
		CLK => clk,
		RESET => RESET,
		EN => enables(0),
		D => mult7_out,
		Q => reg7_out
	);
	
	reg_16b_8: reg_12b PORT MAP(
		CLK => clk,
		RESET => RESET,
		EN => enables(0),
		D => mult8_out,
		Q => reg8_out
	);
	
	reg_16b_9: reg_12b PORT MAP(
		CLK => clk,
		RESET => RESET,
		EN => enables(0),
		D => mult9_out,
		Q => reg9_out
	);
  
  end generate gen_FF; 
		



end generate gen1;




gen2: for i in 1 to 4 generate  --- 

		
		gen_if_1st: if i=1  generate
		adder1 : adder_12b
		  PORT MAP (
			 a => reg2_out,
			 b => reg3_out,
			 clk => clk,
			 ce => enables(1),
			 s => add1_out 
		  );			
			
			
		adder2 : adder_12b
		  PORT MAP (
			 a => reg4_out,
			 b => reg5_out,
			 clk => clk,
			 ce => enables(1),
			 s => add2_out 
		  );
		
			adder3 : adder_12b
		  PORT MAP (
			 a => reg6_out,
			 b => reg7_out,
			 clk => clk,
			 ce => enables(1),
			 s => add3_out 
		  );		
		  
		  
		  adder4 : adder_12b
		  PORT MAP (
			 a => reg8_out,
			 b => reg9_out,
			 clk => clk,
			 ce => enables(1),
			 s => add4_out 
		  );
		  
		  flip_flop1: reg_12b 
		  PORT MAP(
			CLK => clk,
			RESET => RESET,
			EN => enables(1),
			D => reg1_out ,
			Q => fifo1_out
			);			
			end generate gen_if_1st; 
			
		gen_if_2st: if i=2  generate
		adder5 : adder_13b
		  PORT MAP (
			 a => add1_out,
			 b => add2_out,  
			 clk => clk,
			 ce => enables(2),
			 s => add5_out 
		  );			
			
			
		adder6 : adder_13b
		  PORT MAP (
			 a => add3_out,
			 b => add4_out,
			 clk => clk,
			 ce => enables(2),
			 s => add6_out 
		  );

		  
		  flip_flop2: reg_12b 
		  PORT MAP(
			CLK => clk,
			RESET => RESET,
			EN => enables(2),
			D => fifo1_out ,
			Q => fifo2_out
			);			
			end generate gen_if_2st;

			
		gen_if_3st: if i=3  generate
		adder7 : adder_14b
		  PORT MAP (
			 a => add5_out,
			 b => add6_out,
			 clk => clk,
			 ce => enables(3),
			 s => add7_out 
		  );			
					
		  
		  flip_flop3: reg_12b 
		  PORT MAP(
			CLK => clk,
			RESET => RESET,
			EN => enables(3),
			D => fifo2_out ,
			Q => fifo3_out
			);			
			end generate gen_if_3st; 
			
			
			gen_if_4st: if i=4  generate
		adder8 : adder_15b
		  PORT MAP (
			 a => add7_out,
			 b => "000" & fifo3_out,
			 clk => clk,
			 ce => enables(4),
			 s => add8_out 
		  );			
	  	end generate gen_if_4st; 
		
	divider : divider_new
		port map (
			clk => clk,
			rfd => open,
			dividend => add8_out,
			divisor => "001001",
			quotient => divider_out,
			fractional => open);
--			
end generate gen2;
d_out <= divider_out (15 downto 0);
--d_out <= divider_out (35 downto 28);
--d_out <= add8_out (11 downto 4);
--d_out <= add8_out ;
processed_data_ready <= enables(6);
--processed_data_ready <= divider_output_ready;
--d_out <= add8_out (13 downto 6);
--d_out <= divider_out_temp (19 downto 12);
end Behavioral;

