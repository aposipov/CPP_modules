
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << " FragTrap Constructor " << this << " called" << std::endl;
	_name = "Noname";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << " FragTrap Constructor " << this << " called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap & copy)
{
	std::cout << " FragTrap Copy Constructor " << this << " called" <<
	std::endl;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << " FragTrap Copy assignment operator called " << this << " called" << std::endl;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << " FragTrap Destructor " << this << " called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << " FragTrap " << this->_name << " highFivesGuys" <<
	std::endl;
}