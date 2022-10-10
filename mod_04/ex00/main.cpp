
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	Cat testcat;
	testcat.makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << " -----------Wrong Test-----------" << std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();
	std::cout << wrongmeta->getType() << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the wrong sound!
	wrongmeta->makeSound();
	delete wrongmeta;
	delete cat;

	return 0;
}
