library ieee;
use ieee.std_logic_1164.all;
use std.textio.all;
use ieee.std_logic_textio.all;

entity read_lena is
       
end;

architecture arch_read_lena of read_lena is

	COMPONENT Cache_memory
	PORT(
		reset : IN std_logic;
		clk : IN std_logic;
		d_in : IN std_logic_vector(7 downto 0);
		neighborhood_ready : out std_logic;
		DATA_READY : IN std_logic;
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

	
	COMPONENT processor
	PORT(
		pixel0 : IN std_logic_vector(7 downto 0);
		pixel1 : IN std_logic_vector(7 downto 0);
		pixel2 : IN std_logic_vector(7 downto 0);
		pixel3 : IN std_logic_vector(7 downto 0);
		pixel4 : IN std_logic_vector(7 downto 0);
		pixel5 : IN std_logic_vector(7 downto 0);
		pixel6 : IN std_logic_vector(7 downto 0);
		pixel7 : IN std_logic_vector(7 downto 0);
		pixel8 : IN std_logic_vector(7 downto 0);
		d_out : out std_logic_vector(15 downto 0);
		data_ready: in std_logic;
		processed_data_ready: out std_logic;
		CLK : in std_logic
		);
	END COMPONENT;
	

  signal ORIGINAL_PIXEL: std_logic_vector (7 downto 0);
  signal PROCESSED_PIXEL: std_logic_vector (15 downto 0);
  signal CLK,RESET,FLAG_READ, EN, file_written: std_logic;
  signal PIXEL_WRITE : std_logic_vector (7 downto 0);
  signal neighborhood_ready1 : std_logic;
  signal start_writing: std_logic;
  
	signal p1 : std_logic_vector (7 downto 0);
	signal p2 : std_logic_vector (7 downto 0);
	signal p3 : std_logic_vector (7 downto 0);
	signal p4 : std_logic_vector (7 downto 0);
	signal p5 : std_logic_vector (7 downto 0);
	signal p6 : std_logic_vector (7 downto 0);
	signal p7 : std_logic_vector (7 downto 0);
	signal p8 : std_logic_vector (7 downto 0);
	signal p9 : std_logic_vector (7 downto 0);	
 
  
  
begin
process
  FILE vectors : text;

  variable Iline : line;
  variable I1_var :std_logic_vector (7 downto 0);
  --variable I2_var :std_logic_vector (7 downto 0);
  
  variable PIXEL_ORIG_VAR :std_logic_vector (7 downto 0);
 

	begin
	 FLAG_READ <= '0';
	 RESET <= '1';
	 EN <= '0';
	 
	  
	 wait for 20 ns;
	 RESET <= '0';
	 EN <= '1';
	 
	 wait for 70 ns;
	 file_open (vectors,"Lena\Lena128x128g_8bits.dat", read_mode);
    
	 FLAG_READ <= '1';
    while not endfile(vectors) loop
      readline (vectors,Iline);
      read (Iline,I1_var);
     
            
      ORIGINAL_PIXEL <= I1_var;
		
      wait for 20 ns;
		
    end loop;
	FLAG_READ <= '0';
	 --wait for 100 ns;
    file_close (vectors);
	 
    wait;

 end process;
 
 process
 begin
		CLK <= '0';
		wait for 10 ns;
		CLK <= '1';
		wait for 10 ns;
 end process;     
 
 
-- 
 process
-- 
-- 
		file results : text;
		variable OLine : line;	
    begin
--	
		file_open (results,"Lena\Lena_written.dat", write_mode);
		wait until start_writing = '1';
		 
		wait for 520 ns;
		
		file_written <= '0';
		
		--while  FLAG_READ = '1' and start_writing = '1' loop
		
		while  start_writing = '1' loop
			 
			--file_written <= '1';
			
			write (Oline, PROCESSED_PIXEL, right, 2);
			writeline (results, Oline);
			
			--end if;
			
			wait for 20 ns;
		end loop;		
		file_close (results);
		file_written <= '1';
    wait;
--
 end process;
 

Inst_Cache_memory: Cache_memory PORT MAP(
		reset => RESET,
		clk => CLK,
		d_in => ORIGINAL_PIXEL,
		neighborhood_ready => neighborhood_ready1,
		DATA_READY => FLAG_READ,
		pixel1 => p1,
		pixel2 => p2,
		pixel3 => p3,
		pixel4 => p4,
		pixel5 => p5,
		pixel6 => p6,
		pixel7 => p7,
		pixel8 => p8,
		pixel9 => p9,
		d_out_dammy => open,
		sig1_dummy => open,
		sig2_dummy => open
		
		);
		
		Inst_processor: processor PORT MAP(
		pixel0 =>  p1 ,
		pixel1 =>  p2,
		pixel2 =>  p3,
		pixel3 =>  p4,
		pixel4 =>  p5,
		pixel5 =>  p6,
		pixel6 =>  p7,
		pixel7 =>  p8,
		pixel8 =>  p9,
		d_out => PROCESSED_PIXEL,
		data_ready => neighborhood_ready1,
		processed_data_ready => start_writing,
		CLK => CLK
	);

 
--PROCESSED_PIXEL <= ORIGINAL_PIXEL;  
end arch_read_lena;

