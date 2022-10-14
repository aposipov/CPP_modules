
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << " --------------- TEST 1 ---------------" << std::endl;
	{
		Bureaucrat signer("Signer", 150);
		Bureaucrat executor("Executor", 140);
		ShrubberyCreationForm scf("TestForm1");
		RobotomyRequestForm rrf("TestForm1");
		PresidentialPardonForm ppf("TestForm1");
		signer.signForm(scf);
		executor.executeForm(scf);
		signer.signForm(rrf);
		executor.executeForm(rrf);
		signer.signForm(ppf);
		executor.executeForm(ppf);
	}
	std::cout << " --------------- TEST 2 ---------------" << std::endl;
	{
		Bureaucrat signer("Signer", 140);
		Bureaucrat executor("Executor", 130);
		ShrubberyCreationForm scf("TestForm2");
		RobotomyRequestForm rrf("TestForm2");
		PresidentialPardonForm ppf("TestForm2");
		signer.signForm(scf);
		executor.executeForm(scf);
		signer.signForm(rrf);
		executor.executeForm(rrf);
		signer.signForm(ppf);
		executor.executeForm(ppf);
	}
	std::cout << " --------------- TEST 3 ---------------" << std::endl;
	{
		Bureaucrat signer("Signer", 70);
		Bureaucrat executor("Executor", 40);
		ShrubberyCreationForm scf("TestForm3");
		RobotomyRequestForm rrf("TestForm3");
		PresidentialPardonForm ppf("TestForm3");
		signer.signForm(scf);
		executor.executeForm(scf);
		signer.signForm(rrf);
		executor.executeForm(rrf);
		signer.signForm(ppf);
		executor.executeForm(ppf);
	}
	std::cout << " --------------- TEST 4 ---------------" << std::endl;
	{
		Bureaucrat signer("Signer", 20);
		Bureaucrat executor("Executor", 3);
		ShrubberyCreationForm scf("TestForm4");
		RobotomyRequestForm rrf("TestForm4");
		PresidentialPardonForm ppf("TestForm4");
		signer.signForm(scf);
		executor.executeForm(scf);
		signer.signForm(rrf);
		executor.executeForm(rrf);
		signer.signForm(ppf);
		executor.executeForm(ppf);
	}
	return 0;
}