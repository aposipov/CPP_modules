
#include "Cat.hpp"

Cat::Cat()
{
	std::cout << " Cat -> Default Constructor " << this << " called"
	<< std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat & copy) : Animal()
{
	std::cout << " Cat -> Copy Constructor " << this << " called" <<
	std::endl;
	_type = copy._type;
}

Cat::~Cat()
{
	std::cout << " Cat -> Destructor " << this << " called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << " Cat -> Copy assignment operator called " << this << " called"
	<< std::endl;
	_type = copy._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Meow! Meow!" << std::endl;
}