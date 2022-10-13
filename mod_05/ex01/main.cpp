
#include "Bureaucrat.hpp"

int main()
{
	std::cout << " --------------- TEST 1 ---------------" << std::endl;
	try {
		Bureaucrat man("Man1", 100);
		Form form("Form1", -1, 155);
		std::cout << form << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << " --------------- TEST 2 ---------------" << std::endl;
	try {
		Bureaucrat man("Man2", 100);
		Form form("From2", 90, 155);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << " --------------- TEST 3 ---------------" << std::endl;
	try {
		Bureaucrat man("Man3", 100);
		std::cout << man << std::endl;
		man.incGrade();
		std::cout << man.getGrade() << std::endl;
		Form form("Form3", 110, 140);
		std::cout << form << std::endl;
		man.signForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << " --------------- TEST 4 ---------------" << std::endl;
	try {
		Bureaucrat man("Man4", 100);
		std::cout << man << std::endl;
		man.decGrade();
		std::cout << man.getGrade() << std::endl;
		Form form("Form4", 90, 140);
		std::cout << form << std::endl;
		man.signForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
