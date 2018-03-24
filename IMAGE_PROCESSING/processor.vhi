
-- VHDL Instantiation Created from source file processor.vhd -- 15:51:04 12/28/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT processor
	PORT(
		pixel0 : IN std_logic_vector(11 downto 0);
		pixel1 : IN std_logic_vector(11 downto 0);
		pixel2 : IN std_logic_vector(11 downto 0);
		pixel3 : IN std_logic_vector(11 downto 0);
		pixel4 : IN std_logic_vector(11 downto 0);
		pixel5 : IN std_logic_vector(11 downto 0);
		pixel6 : IN std_logic_vector(11 downto 0);
		pixel7 : IN std_logic_vector(11 downto 0);
		pixel8 : IN std_logic_vector(11 downto 0);
		CLK : IN std_logic;          
		d_out : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_processor: processor PORT MAP(
		pixel0 => ,
		pixel1 => ,
		pixel2 => ,
		pixel3 => ,
		pixel4 => ,
		pixel5 => ,
		pixel6 => ,
		pixel7 => ,
		pixel8 => ,
		d_out => ,
		CLK => 
	);


