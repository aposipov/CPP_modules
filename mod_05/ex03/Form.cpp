
#include "Form.hpp"

Form::Form() : _name("form"), _gradeToSign(150), _gradeToExecute(150)
{
	_isSigned = false;
	std::cout << "Form -> Default Constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	_isSigned = false;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form -> Parametric Constructor called" << std::endl;
}

Form::Form(const Form &copy) :
_name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
	_isSigned = copy._isSigned;
	std::cout << "Bureaucrat -> Copy Constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form -> Destructor called" << std::endl;
}

Form & Form::operator=(const Form &copy)
{
	if (this == &copy)
		return *this;
	_isSigned = copy._isSigned;
	std::cout << "Form -> Copy assignment operator called" << std::endl;
	return *this;
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

void Form::beSigned(Bureaucrat & b)
{

	if (_gradeToSign < b.getGrade())
		throw Form::GradeTooLowException();
	_isSigned = true;
}

const char* Form::GradeTooLowException::what() const throw()
{

	return "Grade for Form is too low";
}

const char* Form::GradeTooHighException::what() const throw()
{

	return "Grade for Form is too high";
}

const char* Form::IsNotSignedFormException::what() const throw()
{

	return "The Form is not signed";
}

std::ostream& operator<<(std::ostream & out, Form const & src)
{
	return out << "Form: " << src.getName() << ", isSigned: " << src.getIsSigned()
			   << ", gradeToSign: " << src.getGradeToSign()
			   << ", gradeToExecute: " << src.getGradeToExecute();
}