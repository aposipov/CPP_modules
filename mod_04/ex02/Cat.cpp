
#include "Cat.hpp"

Cat::Cat()
{
	std::cout << " Cat -> Default Constructor " << this << " called"
	<< std::endl;
	_type = "Cat";
	_brain = new Brain;
}

Cat::Cat(const Cat & copy) : Animal()
{
	std::cout << " Cat -> Copy Constructor " << this << " called" <<
	std::endl;
	_type = copy._type;
	_brain = new Brain(*(copy._brain));
}

Cat::~Cat()
{
	std::cout << " Cat -> Destructor " << this << " called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return *this;
	std::cout << " Cat -> Copy assignment operator called " << this << " called"
	<< std::endl;
	_type = copy._type;
	delete _brain;
	_brain = new Brain(*(copy._brain));
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Meow! Meow!" << std::endl;
}