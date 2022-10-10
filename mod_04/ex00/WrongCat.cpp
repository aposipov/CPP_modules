
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << " WrongCat -> Default Constructor " << this << " called"
			  << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & copy) : WrongAnimal()
{
	std::cout << " WrongCat -> Copy Constructor " << this << " called" <<
			  std::endl;
	_type = copy._type;
}

WrongCat::~WrongCat()
{
	std::cout << " WrongCat -> Destructor " << this << " called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << " WrongCat -> Copy assignment operator called " << this << " "
																		"called"
			  << std::endl;
	_type = copy._type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Meow! Meow!" << std::endl;
}