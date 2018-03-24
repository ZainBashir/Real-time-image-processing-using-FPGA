--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:04:30 11/14/2017
-- Design Name:   
-- Module Name:   C:/TEMP/IMAGE_PROCESSING/adder_8_test.vhd
-- Project Name:  IMAGE_PROCESSING
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: adder_8
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
use ieee.numeric_std.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY adder_8_test IS
END adder_8_test;
 
ARCHITECTURE behavior OF adder_8_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT adder_8
    PORT(
         input_1 : IN  signed(7 downto 0);
         input_2 : IN  signed(7 downto 0);
         output : OUT  signed(8 downto 0);
         CLK : IN  std_logic;
         RESET : IN  std_logic;
         EN : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal input_1 : signed(7 downto 0) := (others => '0');
   signal input_2 : signed(7 downto 0) := (others => '0');
   signal CLK : std_logic := '0';
   signal RESET : std_logic := '0';
   signal EN : std_logic := '0';

 	--Outputs
   signal output : signed(8 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: adder_8 PORT MAP (
          input_1 => input_1,
          input_2 => input_2,
          output => output,
          CLK => CLK,
          RESET => RESET,
          EN => EN
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
			RESET <= '1';
			

      wait for CLK_period*2;
		EN  <='1';
		RESET <= '0';
		wait for CLK_period*10;
		input_1 <= "11111111";
		input_2 <= "11111111";
      -- insert stimulus here 

      wait;
   end process;

END;
