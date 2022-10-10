
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;



	std::cout << std::endl;
	Animal* animalArray[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animalArray[i] = new Dog();
		else
			animalArray[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
		delete animalArray[i];

	std::cout << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}

	return 0;
}