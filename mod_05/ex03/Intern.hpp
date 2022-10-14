
#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {

public:
	Intern();
	Intern(const Intern & copy);
	~Intern();
	Intern & operator=(const Intern & copy);

	Form * makeform(std::string nameForm, std::string targetForm);
};

#endif
