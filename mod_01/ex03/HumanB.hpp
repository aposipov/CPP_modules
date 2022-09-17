
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

public:
	HumanB(std::string name);
	~HumanB(void);
	void attack(void);
	void setWeapon(Weapon &weapon);
	//void setWeapon2(Weapon *weapon);

private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif
