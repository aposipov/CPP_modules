
#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern -> Default Constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
	std::cout << "Intern -> Copy Constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern -> Destructor called" << std::endl;
}

Intern & Intern::operator=(const Intern &copy)
{
	if (this == &copy)
		return *this;
	std::cout << "Intern -> Copy assignment operator called" << std::endl;
	return *this;
}

Form * Intern::makeform(std::string nameForm, std::string targetForm)
{

}