
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
Form("Presidential Pardon", 25, 5)
{
	_target = "DefaultTarget";
	std::cout << " PresidentialPardonForm -> Default Constructor called" <<
	std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("Presidential Pardon", 25, 5)
{
	_target = target;
	std::cout << " PresidentialPardonForm -> Parametric Constructor called" <<
	std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm
&copy) : Form(copy)
{
	_target = copy._target;
	std::cout << " PresidentialPardonForm -> Copy Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << " PresidentialPardonForm -> Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this == &copy)
		return *this;
	_target = copy._target;
	std::cout << " PresidentialPardonForm -> Copy assignment operator called"
	<< std::endl;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw Form::IsNotSignedFormException();
	if (this->getGradeToExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" <<
	std::endl;
}