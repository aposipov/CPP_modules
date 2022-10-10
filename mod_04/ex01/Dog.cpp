
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << " Dog -> Default Constructor " << this << " called"
			  << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog & copy) : Animal()
{
	std::cout << " Dog -> Copy Constructor " << this << " called" <<
			  std::endl;
	_type = copy._type;
}

Dog::~Dog()
{
	std::cout << " Dog -> Destructor " << this << " called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << " Dog -> Copy assignment operator called " << this << " called"
			  << std::endl;
	_type = copy._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Woof! Woof!" << std::endl;
}