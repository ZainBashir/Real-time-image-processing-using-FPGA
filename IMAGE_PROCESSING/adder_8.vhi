
-- VHDL Instantiation Created from source file adder_8.vhd -- 10:48:36 12/08/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT adder_8
	PORT(
		input_1 : IN std_logic_vector(7 downto 0);
		input_2 : IN std_logic_vector(7 downto 0);
		CLK : IN std_logic;
		RESET : IN std_logic;
		EN : IN std_logic;          
		output : OUT std_logic_vector(8 downto 0)
		);
	END COMPONENT;

	Inst_adder_8: adder_8 PORT MAP(
		input_1 => ,
		input_2 => ,
		output => ,
		CLK => ,
		RESET => ,
		EN => 
	);


