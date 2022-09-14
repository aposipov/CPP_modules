//
// Created by user on 12.09.22.
//

#include "Zombie.hpp"

Zombie::Zombie(){}; //?

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << "-> was created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << "-> was destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}