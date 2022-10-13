
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form & copy);
	~Form();
	Form & operator=(const Form & copy);

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat & b);

	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};

private:
	std::string const	_name;
	bool				_isSigned;
	int const			_gradeToSign;
	int const			_gradeToExecute;
};

std::ostream& operator<<(std::ostream &out, const Form &src);

#endif
