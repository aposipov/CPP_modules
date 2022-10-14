
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
Form("Robotomy Request" , 72, 45)
{
	_target = "DefaultTarget";
	std::cout << " RobotomyRequestForm -> Default Constructor called" <<
	std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("Robotomy Request" , 72, 45)
{
	_target = target;
	std::cout << " RobotomyRequestForm -> Parametric Constructor called" <<
	std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
Form(copy)
{
	_target = copy._target;
	std::cout << " RobotomyRequestForm -> Copy Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm -> Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this == &copy)
		return *this;
	_target = copy._target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw Form::IsNotSignedFormException();
	if (this->getGradeToExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
	srand(time(NULL));
	std::cout << "Bzzz..." << std::endl;
	sleep(1);
	std::cout << "Bzzz... Bzzz..." << std::endl;
	sleep(1);
	std::cout << "Bzzz... Bzzzz... Bzzz..." << std::endl;
	sleep(1);
	if (rand() % 2)
		std::cout << _target << " has been robotomized succesfully" <<
		std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}