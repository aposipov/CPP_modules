
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor " << this << " called" << std::endl;
	this->_name = "Noname";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor " << this << " called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap & copy)
{
	std::cout << "Copy Constructor " << this << " called" << std::endl;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap & copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor " << this << " called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks "
			  << target << ", causing " << _attackDamage
			  << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " take damage "
	<< amount << ", hit points = " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints && this->_energyPoints)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " recovers " << amount;
		std::cout << " health points = " << this->_hitPoints << std::endl;
	}
}

// ClapTrap <name> attacks <target>, causing <damage> points of damage
