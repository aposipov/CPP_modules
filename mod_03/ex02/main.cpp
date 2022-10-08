
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap botClap1("botClap1");
	ClapTrap botClap2("botClap2");
	botClap1.attack("botCalp2");
	botClap2.takeDamage(2);
	botClap2.beRepaired(1);

	ScavTrap botScav1("botScav1");
	ScavTrap botScav2("borScav2");
	botScav1.attack("botScav2");
	botScav2.takeDamage(2);
	botScav2.beRepaired(1);
	botScav1.guardGate();
	botScav2.guardGate();

	FragTrap botFrag1("botFrag1");
	FragTrap botFrag2("botFrag2");
	botFrag1.attack("botFrag2");
	botFrag2.takeDamage(2);
	botFrag2.beRepaired(1);
	botFrag1.highFivesGuys();
	botFrag2.highFivesGuys();

	return 0;
}
