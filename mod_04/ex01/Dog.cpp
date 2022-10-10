
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << " Dog -> Default Constructor " << this << " called"
			  << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

Dog::Dog(const Dog & copy) : Animal()
{
	std::cout << " Dog -> Copy Constructor " << this << " called" <<
	std::endl;
	_type = copy._type;
	_brain = new Brain(*(copy._brain));
}

Dog::~Dog()
{
	std::cout << " Dog -> Destructor " << this << " called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return *this;
	std::cout << " Dog -> Copy assignment operator called " << this << " called"
	<< std::endl;
	_type = copy._type;
	delete _brain;
	_brain = new Brain(*(copy._brain));
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Woof! Woof!" << std::endl;
}