----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:47:33 11/14/2017 
-- Design Name: 
-- Module Name:    adder - Behavioral 
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
use IEEE.STD_LOGIC_unsigned.ALL;
use ieee.numeric_std.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity adder_8 is
    generic(n : integer :=8);
    Port ( input_1 : in  signed (n-1 downto 0);
           input_2 : in  signed (n-1 downto 0);
           output : out  signed (n downto 0);
			  CLK : in  STD_LOGIC;
           RESET : in  STD_LOGIC;
           EN : in  STD_LOGIC);
end adder_8;

architecture Behavioral of adder_8 is

--signal input_1_9b, input_2_9b :signed(n downto 0);
 
begin
--input_1_9b(n downto n) 	<= (others=> '0');
--input_1_9b(n-1 downto 0) <=input_1;
--
--input_2_9b(n downto n) 	<= (others=> '0');
--input_2_9b(n-1 downto 0) <=input_2;

--input_3_9b(n downto n) 	<= (others=> '0');
--input_3_9b(n-1 downto 0) <=input_2;
--
--input_2_9b(n downto n) 	<= (others=> '0');
--input_2_9b(n-1 downto 0) <=input_2;
 
p1:process(CLK,RESET)

	begin
		if RESET = '1' then output <= (others => '0');
			elsif (CLK' event and CLK = '1') then
				output <= input_1 + input_2;
		end if;
	end process;

end Behavioral;

