
#include "ScavTrap.hpp"

int main()
{
	ScavTrap bot1("bot1");
	ClapTrap bot2("bot2");
//	ScavTrap bot3(bot1);
	bot1.guardGate();
	bot2.attack("bot1");
	bot1.attack("bot");

	return 0;
}