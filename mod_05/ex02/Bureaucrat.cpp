
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "default";
	_grade = 150;
	std::cout << "Bureaucrat -> Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_name = name;
	_grade = grade;
	std::cout << "Bureaucrat -> Parametric Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << "Bureaucrat -> Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat -> Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this == &copy)
		return *this;
	_name = copy._name;
	_grade = copy._grade;
	std::cout << "Bureaucrat -> Copy assignment operator called" << std::endl;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form &target)
{
	try {
		target.beSigned(*this);
		std::cout << _name << " signed " << target.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _name << " couldn't sign " << target.getName() <<
		" because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form)
{
	try {
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << _name << " couldn't execute " << form.getName()
		<< " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high. Max grade is 1";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low. Min grade is 150";
}

std::ostream& operator<<(std::ostream & out, Bureaucrat const & src)
{
	return out << src.getName() << ", bureaucrat grade " << src.getGrade();
}