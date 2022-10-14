
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <unistd.h>

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & copy);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const & copy);

	void	execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};

#endif
