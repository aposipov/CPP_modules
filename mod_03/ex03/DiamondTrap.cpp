
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "  DiamondTrap Constructor " << this << " called" << std::endl;
	_name = "Noname";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "  DiamondTrap Constructor " << this << " called" << std::endl;
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap & copy)
{
	std::cout << "  DiamondTrap Copy Constructor " << this << " called" <<
	std::endl;
	ClapTrap::_name = copy._name + "_clap_name";
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "  DiamondTrap Destructor " << this << " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "  DiamondTrap Copy assignment operator called " << this << " "
																	  "called" << std::endl;
	ClapTrap::_name = copy._name + "_clap_name";
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << _name << " and ClapTrap name is "
	<< ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}