
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_val = 0;
	return;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_val =(value << Fixed::_bits);
	return;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = (int)roundf(value * (1 << Fixed::_bits));
	return;
}

Fixed::Fixed(const Fixed & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_val = copy.getRawBits();
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

Fixed & Fixed::operator=(Fixed const & copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == & copy)
		return *this;
	this->_val = copy.getRawBits();
	return *this;
}

float Fixed::toFloat( void ) const
{
	return ((float)_val / (1 << Fixed::_bits));
}

int Fixed::toInt( void ) const
{
	return (_val >> Fixed::_bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}