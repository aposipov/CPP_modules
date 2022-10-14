
#include "Bureaucrat.hpp"
//#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
//	Bureaucrat man("test", 140);
//	Form *form = new ShrubberyCreationForm();
//	form->execute(man);

	Bureaucrat				admin("Admin", 140);
	Bureaucrat				user("User", 130);
	ShrubberyCreationForm scf("Test");
	RobotomyRequestForm rrf("Test");
	PresidentialPardonForm ppf("Test");

	admin.signForm(scf);
	user.executeForm(scf);
	admin.signForm(rrf);
	user.executeForm(rrf);
	admin.signForm(ppf);
	user.executeForm(ppf);


	return 0;
}