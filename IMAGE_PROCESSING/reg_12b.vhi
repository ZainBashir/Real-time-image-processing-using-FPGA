
-- VHDL Instantiation Created from source file reg_12b.vhd -- 11:23:56 12/08/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT reg_12b
	PORT(
		CLK : IN std_logic;
		RESET : IN std_logic;
		EN : IN std_logic;
		D : IN std_logic_vector(11 downto 0);          
		Q : OUT std_logic_vector(11 downto 0)
		);
	END COMPONENT;

	Inst_reg_12b: reg_12b PORT MAP(
		CLK => ,
		RESET => ,
		EN => ,
		D => ,
		Q => 
	);


