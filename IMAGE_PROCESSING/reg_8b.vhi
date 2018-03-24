
-- VHDL Instantiation Created from source file reg_8b.vhd -- 10:47:14 12/08/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT reg_8b
	PORT(
		CLK : IN std_logic;
		RESET : IN std_logic;
		EN : IN std_logic;
		D : IN std_logic_vector(7 downto 0);          
		Q : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_reg_8b: reg_8b PORT MAP(
		CLK => ,
		RESET => ,
		EN => ,
		D => ,
		Q => 
	);


