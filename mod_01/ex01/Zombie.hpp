//
// Created by user on 12.09.22.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
private:
	std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
