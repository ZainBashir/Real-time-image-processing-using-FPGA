library ieee;
use ieee.std_logic_1164.all;
use std.textio.all;
use ieee.std_logic_textio.all;
--use ieee.std_logic_arith.all;
--use ieee.std_logic_unsigned.all;

entity COMP2N8_TEST2 is
       
end;

architecture arch_COMP2N8_TEST2 of COMP2N8_TEST2 is

	COMPONENT Cache_memory
	PORT(
		reset : IN std_logic;
		clk : IN std_logic;
		d_in : IN std_logic_vector(7 downto 0);          
		pixel1 : OUT std_logic_vector(7 downto 0);
		pixel2 : OUT std_logic_vector(7 downto 0);
		pixel3 : OUT std_logic_vector(7 downto 0);
		pixel4 : OUT std_logic_vector(7 downto 0);
		pixel5 : OUT std_logic_vector(7 downto 0);
		pixel6 : OUT std_logic_vector(7 downto 0);
		pixel7 : OUT std_logic_vector(7 downto 0);
		pixel8 : OUT std_logic_vector(7 downto 0);
		pixel9 : OUT std_logic_vector(7 downto 0);
		d_out_dammy : OUT std_logic_vector(7 downto 0);
		sig1_dummy : OUT std_logic_vector(7 downto 0);
		sig2_dummy : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;
	

  signal CLK, RESET, en : std_logic;
  signal prog_full_thresh : std_logic_vector(9 downto 0) := "00"&X"7C";
  signal d_in, d_out : std_logic_vector(7 downto 0);
  --signal pixel_counter: std_logic_vector(8 downto 0);
  signal FLAG_READ, finish : std_logic := '0';
  signal data_ready : std_logic := '0';
  signal writing : std_logic := '0';
  
	signal p0 : std_logic_vector(7 downto 0);
	signal p1 : std_logic_vector(7 downto 0);
	signal p2 : std_logic_vector(7 downto 0);
	signal p3 : std_logic_vector(7 downto 0);
	signal p4 : std_logic_vector(7 downto 0);
	signal p5 : std_logic_vector(7 downto 0);
	signal p6 : std_logic_vector(7 downto 0);
	signal p7 : std_logic_vector(7 downto 0);
	signal p8 : std_logic_vector(7 downto 0);
  
  
  
  
  
	    
begin
 process
  FILE vectors : text;
  
  variable Iline : line;
  variable I1_var, I2_var :std_logic_vector (7 downto 0);
 -- variable O1_var :std_logic_vector (7 downto 0);
    
    begin
	 FLAG_READ <= '0';
	 RESET <= '1';
	 en <= '0';
	 
	 wait for 100 ns;
	 RESET <= '0';
	 en <= '1';
    file_open (vectors,"Lena\Lena128x128g_8bits.dat", read_mode);
	 
    
    while not endfile(vectors) loop
      readline (vectors,Iline);
      read (Iline,I1_var);
		
		--pixel_counter <= pixel_counter + '1';
		
		d_in <= I1_var;
		FLAG_READ <= '1';
		
		CLK <= '0';
      wait for 10 ns;
      CLK <= '1';
            
      wait for 10 ns;
		

    end loop;
    file_close (vectors);
	 
	 FLAG_READ <= '0';
	 wait for 100 ns;

    wait;

 end process;
 
 process

file results : text;
variable OLine : line;
    
 begin
 
		file_open (results,"Lena\Lena_written.dat", write_mode);
		wait until FLAG_READ = '1';	
		finish <= '0';
		--WAIT FOR 20 ns;		
		while FLAG_READ='1' loop
			--if data_ready = '1' and CLK = '1' then
			if CLK = '1' then
				--wait for 20 ns;
				
				writing <= '1';
				write (Oline, d_out, right, 2);
				writeline (results, Oline);
				--wait for 20 ns;
				
			end if;
			wait for 10 ns;
			writing <= '0';
		end loop;
		file_close (results);
		finish <= '1';
      wait;
 end process;
 
--d_out <= d_in; 
Inst_Cache_memory: Cache_memory PORT MAP(
		reset => RESET,
		clk => CLK,
		d_in => d_in,
		pixel1 => open,
		pixel2 => open,
		pixel3 => open,
		pixel4 => open,
		pixel5 => d_out,
		pixel6 => open,
		pixel7 => open,
		pixel8 => open,
		pixel9 => open,
		d_out_dammy => open,
		sig1_dummy => open,
		sig2_dummy => open
	);


	
-- CS: SYNC port map (I1, I2, I1_INT, I2_INT, CLK);
-- CTEST: COMP2N8 port map (I1_INT, I2_INT, I2BIGGER);
-- CSEL : MUX2I8 port map (I1_INT, I2_INT, I2BIGGER,O1);
  
end arch_COMP2N8_TEST2;

