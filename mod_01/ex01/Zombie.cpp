
#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "was created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << "-> was destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}