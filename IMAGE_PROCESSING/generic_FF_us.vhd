





----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:42:11 09/26/2017 
-- Design Name: 
-- Module Name:    generic_FF - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity reg_8b is
generic(Bus_Width: integer := 8);
    Port ( CLK : in  STD_LOGIC;
           RESET : in  STD_LOGIC;
           EN : in  STD_LOGIC;
           D : in  STD_LOGIC_VECTOR (Bus_Width - 1 downto 0);
           Q : out  STD_LOGIC_VECTOR (Bus_Width - 1 downto 0));
end reg_8b ;

architecture Behavioral of reg_8b  is

begin
p1:process(CLK,RESET,EN)

begin
	if RESET = '1' then Q <= (others => '0');
	elsif (CLK' event and clk = '1') then
	if (EN = '1') then Q <= D;
	end if;
end if;	
end process;

end Behavioral;

