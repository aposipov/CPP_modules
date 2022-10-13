
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat & copy);
	~Bureaucrat();
	Bureaucrat & operator=(const Bureaucrat & copy);

	std::string getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();
	void signForm(Form & target);
	void executeForm(Form const & form);

class GradeTooHighException : public std::exception {
	virtual const char* what() const throw();
};
class GradeTooLowException : public std::exception {
	virtual const char* what() const throw();
};

private:
	std::string _name;
	int _grade;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &src);

#endif
