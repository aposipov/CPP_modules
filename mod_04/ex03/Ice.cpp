
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string const &type)
{
	_type = type;
}

Ice::Ice(Ice const &copy)
{
	this->_type = copy._type;
}

Ice::~Ice() {}

Ice &Ice::operator=(Ice const &copy)
{
	this->_type = copy._type;
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
