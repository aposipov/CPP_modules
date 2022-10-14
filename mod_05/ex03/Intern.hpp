
#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:
	Intern();
	Intern(const Intern & copy);
	~Intern();
	Intern & operator=(const Intern & copy);

	Form * makeform(std::string nameForm, std::string targetForm);
	class UnknownFormException : public std::exception {
		virtual const char* what() const throw();
	};
};

#endif
