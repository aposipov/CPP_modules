//
// Created by user on 13.10.22.
//

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat man("test", 140);
	Form *form = new ShrubberyCreationForm();
	form->execute(man);
	return 0;
}