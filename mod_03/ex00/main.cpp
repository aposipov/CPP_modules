
#include "ClapTrap.hpp"

int main()
{
	ClapTrap bot1("bot1");
	ClapTrap bot2("bot2");
	ClapTrap bot3;
	ClapTrap bot4(bot2);

	bot1.attack("bot2");
	bot2.takeDamage(2);
	bot3.attack("bot4");
	bot4.takeDamage(3);
	bot2.beRepaired(5);
	bot4.beRepaired(5);

	return 0;
}
