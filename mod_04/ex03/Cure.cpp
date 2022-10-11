
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(std::string const &type)
{
	_type = type;
}

Cure::Cure(Cure const &copy)
{
	this->_type = copy._type;
}

Cure::~Cure() {}

Cure &Cure::operator=(Cure const &copy)
{
	this->_type = copy._type;
	return *this;
}
AMateria *Cure::clone() const
{
	return new Cure();
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}