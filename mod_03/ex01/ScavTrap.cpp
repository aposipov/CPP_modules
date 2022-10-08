
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << " ScavStrap Constructor " << this << " called" << std::endl;
	_name = "Noname";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << " ScavStrap Constructor " << this << " called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & copy) : ClapTrap()
{
	std::cout << " ScavStrap Constructor " << this << " called" << std::endl;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap & copy)
{
	std::cout << " ScavTrap Copy assignment operator called" << std::endl;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << " ScavTrap Destructor " << this << " called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints && this->_energyPoints)
	{
		std::cout << " ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << " ScavTrap " << this->_name << " activated guardGate mode" <<
	std::endl;
}



