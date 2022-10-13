
#include "Bureaucrat.hpp"

int main()
{
	std::cout << " ---------------TEST 1 ---------------" << std::endl;
	try {
		Bureaucrat test("test1", -42);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << " ---------------TEST 2 ---------------" << std::endl;
	try {
		Bureaucrat test("test2", 151);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << " ---------------TEST 3 ---------------" << std::endl;
	try {
		Bureaucrat test("test3", 100);
		std::cout << test << std::endl;
		test.incGrade();
		std::cout << test.getGrade() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << " ---------------TEST 4 ---------------" << std::endl;
	try {
		Bureaucrat test("test4", 100);
		std::cout << test << std::endl;
		test.decGrade();
		std::cout << test.getGrade() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << " ---------------TEST 5 ---------------" << std::endl;
	try {
		Bureaucrat test("test5", 1);
		std::cout << test << std::endl;
		test.incGrade();
		std::cout << test.getGrade() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << " ---------------TEST 6 ---------------" << std::endl;
	try {
		Bureaucrat test("test6", 149);
		std::cout << test << std::endl;
		test.decGrade();
		test.decGrade();
		std::cout << test.getGrade() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
