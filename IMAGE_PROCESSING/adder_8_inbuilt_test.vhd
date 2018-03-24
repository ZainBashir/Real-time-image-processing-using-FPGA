--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:45:27 11/17/2017
-- Design Name:   
-- Module Name:   C:/TEMP/IMAGE_PROCESSING/adder_8_inbuilt_test.vhd
-- Project Name:  IMAGE_PROCESSING
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: adder_8_inbuilt
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY adder_8_inbuilt_test IS
END adder_8_inbuilt_test;
 
ARCHITECTURE behavior OF adder_8_inbuilt_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT adder_8_inbuilt
    PORT(
         a : IN  std_logic_vector(8 downto 0);
         b : IN  std_logic_vector(8 downto 0);
         clk : IN  std_logic;
         ce : IN  std_logic;
         s : OUT  std_logic_vector(9 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(8 downto 0) := (others => '0');
   signal b : std_logic_vector(8 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal ce : std_logic := '0';

 	--Outputs
   signal s : std_logic_vector(9 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: adder_8_inbuilt PORT MAP (
          a => a,
          b => b,
          clk => clk,
          ce => ce,
          s => s
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		ce <= '1';

      wait for clk_period*10;
		a <= "100000001";
		b <= "000000001";
      -- insert stimulus here 

      wait;
   end process;
	
	
	

END;
