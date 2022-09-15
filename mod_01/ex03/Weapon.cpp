
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	return ;
}

std::string Weapon::getType(void)
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}