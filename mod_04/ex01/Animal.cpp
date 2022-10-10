
#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal -> Default Constructor " << this << " called"
	<< std::endl;
	_type = "unknown type";
}

Animal::Animal(std::string name)
{
	std::cout << "Animal -> Constructor " << this << " called" << std::endl;
	_type = name;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal -> Copy Constructor " << this << " called" <<
	std::endl;
	_type = copy._type;
}

Animal::~Animal()
{
	std::cout << "Animal -> Destructor " << this << " called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Animal -> Copy assignment operator called " << this << " called"
	<< std::endl;
	_type = copy._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "I am Animal" << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}