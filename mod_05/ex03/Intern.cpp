
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

static Form * getSCF(std::string target) {return new ShrubberyCreationForm
(target);}
static Form * getRRF(std::string target) {return new RobotomyRequestForm
(target);}
static Form * getPPF(std::string target) {return new PresidentialPardonForm
(target);}

Form * Intern::makeform(std::string nameForm, std::string targetForm)
{
	Form * (*funcs[3])(std::string) = {getSCF, getRRF, getPPF};
	std::string names[3] = {"ShrubberyCreation","RobotomyRequest", "PresidentialPardon"};
	for(int i = 0; i < 3; i++)
		if (nameForm == names[i])
		{
			std::cout << "Intern create"<< nameForm << std::endl;
			return funcs[i](nameForm);
		}
	throw Intern::UnknownFormException();
}

const char* Intern::UnknownFormException::what() const throw() { return ("unknown form"); }