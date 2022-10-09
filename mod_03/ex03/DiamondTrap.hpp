
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap{

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap & copy);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap & copy);

	void whoAmI();
	void attack(const std::string& target);

private:
	std::string _name;
};

#endif
