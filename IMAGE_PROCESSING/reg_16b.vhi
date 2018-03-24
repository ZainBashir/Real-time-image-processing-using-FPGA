
-- VHDL Instantiation Created from source file reg_16b.vhd -- 22:20:35 12/27/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT reg_16b
	PORT(
		CLK : IN std_logic;
		RESET : IN std_logic;
		EN : IN std_logic;
		D : IN std_logic_vector(15 downto 0);          
		Q : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;

	Inst_reg_16b: reg_16b PORT MAP(
		CLK => ,
		RESET => ,
		EN => ,
		D => ,
		Q => 
	);


