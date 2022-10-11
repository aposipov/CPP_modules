
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria	*_inventory[4];
	std::string	_name;

public:
	Character();
	Character(std::string const &name);
	Character(Character const &copy);
	~Character();
	Character &operator=(Character const &copy);

	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif
