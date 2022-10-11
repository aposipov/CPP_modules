
#include "Character.hpp"

Character::Character() : _name("noname")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const &name): _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if(_inventory[i] != NULL)
			delete _inventory[i];
}

Character::Character(Character const &copy)
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i]->clone();
}

Character &Character::operator=(Character const &copy)
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i]->clone();
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	int flag = 1;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i]  == NULL and flag == 1)
		{
			this->_inventory[i] = m;
			flag = 0;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 &&  idx <= 3)
		this->_inventory[idx]  = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 &&  idx <= 3 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}