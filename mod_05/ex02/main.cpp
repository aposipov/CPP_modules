
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	std::cout << " --------------- TEST 1 ---------------" << std::endl;
	{
		Bureaucrat admin("Admin", 150);
		Bureaucrat user("User", 140);
		ShrubberyCreationForm scf("TestForm1");
		RobotomyRequestForm rrf("TestForm1");
		PresidentialPardonForm ppf("TestForm1");
		admin.signForm(scf);
		user.executeForm(scf);
		admin.signForm(rrf);
		user.executeForm(rrf);
		admin.signForm(ppf);
		user.executeForm(ppf);
	}
	std::cout << " --------------- TEST 2 ---------------" << std::endl;
	{
		Bureaucrat admin("Admin", 140);
		Bureaucrat user("User", 130);
		ShrubberyCreationForm scf("TestForm2");
		RobotomyRequestForm rrf("TestForm2");
		PresidentialPardonForm ppf("TestForm2");
		admin.signForm(scf);
		user.executeForm(scf);
		admin.signForm(rrf);
		user.executeForm(rrf);
		admin.signForm(ppf);
		user.executeForm(ppf);
	}
	std::cout << " --------------- TEST 3 ---------------" << std::endl;
	{
		Bureaucrat admin("Admin", 70);
		Bureaucrat user("User", 40);
		ShrubberyCreationForm scf("TestForm3");
		RobotomyRequestForm rrf("TestForm3");
		PresidentialPardonForm ppf("TestForm3");
		admin.signForm(scf);
		user.executeForm(scf);
		admin.signForm(rrf);
		user.executeForm(rrf);
		admin.signForm(ppf);
		user.executeForm(ppf);
	}
	std::cout << " --------------- TEST 4 ---------------" << std::endl;
	{
		Bureaucrat admin("Admin", 20);
		Bureaucrat user("User", 3);
		ShrubberyCreationForm scf("TestForm4");
		RobotomyRequestForm rrf("TestForm4");
		PresidentialPardonForm ppf("TestForm4");
		admin.signForm(scf);
		user.executeForm(scf);
		admin.signForm(rrf);
		user.executeForm(rrf);
		admin.signForm(ppf);
		user.executeForm(ppf);
	}
	return 0;
}