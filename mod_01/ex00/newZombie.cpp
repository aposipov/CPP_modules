//
// Created by user on 12.09.22.
//

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	return (new Zombie(name));
}