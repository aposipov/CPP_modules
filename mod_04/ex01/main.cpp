
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << std::endl << "----- Create animals -----" << std::endl;
	Animal* animals[10];
	for (int n = 1; n <= 10; n++) {
		std::cout << std::endl << "create " << n << std::endl;
		if (n % 2 == 0) {
			animals[n] = new Cat();
		} else {
			animals[n] = new Dog();
		}
	}
	std::cout << std::endl << "----- Make sound -----" << std::endl <<
	std::endl;
	animals[1]->makeSound();
	animals[2]->makeSound();

	std::cout << std::endl << "----- Delete animals -----" << std::endl;
	for (int n = 1; n <= 10; n++) {
		std::cout << std::endl << "delete " << n << std::endl;
		delete animals[n];
	}
	return 0;
}