
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_val = 0;
	return;
}

Fixed::Fixed(const Fixed & other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_val = other.getRawBits();
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == & other) //
		return *this;
	this->_val = other.getRawBits();
	return *this;
}