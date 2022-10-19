
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

static Base*	generate(void) {

	srand(time(NULL));
	switch (rand() % 3) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

static void	identify(Base* p) {

	if (dynamic_cast<A*>(p))
		std::cout << "Input type is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Input type is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Input type is C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

static void	identify(Base& p) {

	try {
		dynamic_cast<A&>(p);
		std::cout << "Input type is A" << std::endl;
		return;
	}
	catch (std::exception & e) {}
	try {
		dynamic_cast<B&>(p);
		std::cout << "Input type is B" << std::endl;
		return;
	}
	catch (std::exception & e) {}
	try {
		dynamic_cast<C&>(p);
		std::cout << "Input type is C" << std::endl;
		return;
	}
	catch (std::exception & e) {}
	std::cout << "Unknown type" << std::endl;
}

int	main(void) {

	Base* ptr = generate();
	Base& ref = *ptr;

	identify(ptr);
	identify(ref);

	delete ptr;

	return 0;
}
