
#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "unknown type";
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::AMateria(AMateria const &copy)
{
	_type = copy._type;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(AMateria const &copy)
{
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << " use materia" << std::endl;
}