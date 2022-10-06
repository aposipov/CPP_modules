
#include "Fixed.hpp"

Fixed::Fixed(void)
{
//	std::cout << "Default constructor called" << std::endl;
	this->_val = 0;
	return;
}

Fixed::Fixed(int const value)
{
//	std::cout << "Int constructor called" << std::endl;
	this->_val =(value << Fixed::_bits);
	return;
}

Fixed::Fixed(float const value)
{
//	std::cout << "Float constructor called" << std::endl;
	this->_val = (int)roundf(value * (1 << Fixed::_bits));
	return;
}

Fixed::Fixed(const Fixed & copy)
{
//	std::cout << "Copy constructor called" << std::endl;
	this->_val = copy.getRawBits();
}

int	Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

void Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & copy)
{
//	std::cout << "Copy assignment operator called" << std::endl;
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

bool Fixed::operator>(Fixed const & fixed) const
{
	return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(Fixed const & fixed) const
{
	return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(Fixed const & fixed) const
{
	return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(Fixed const & fixed) const
{
	return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(Fixed const & fixed) const
{
	return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(Fixed const & fixed) const
{
	return this->getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator+(Fixed const & fixed)
{
	Fixed new_Fixed(*this);

	new_Fixed.setRawBits(this->getRawBits() + fixed.getRawBits());
	return new_Fixed;
}

Fixed Fixed::operator-(Fixed const & fixed)
{
	Fixed new_Fixed(*this);

	new_Fixed.setRawBits(this->getRawBits() - fixed.getRawBits());
	return new_Fixed;
}

Fixed Fixed::operator*(Fixed const & fixed)
{
	Fixed new_Fixed(*this);

	new_Fixed.setRawBits( (int)((long)this->getRawBits() * (long)fixed
	.getRawBits()) / (1 << Fixed::_bits));
	return new_Fixed;
}

Fixed Fixed::operator/(Fixed const & fixed)
{
	Fixed new_Fixed(*this);

	new_Fixed.setRawBits( (int)((long)this->getRawBits() * (1 <<
	Fixed::_bits) / (long)fixed.getRawBits()));
	return new_Fixed;
}

Fixed Fixed::operator++(int)
{
	Fixed new_Fixed(*this);
	this->operator++();
	return (new_Fixed);
}

Fixed Fixed::operator++(void)
{
	this->_val++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed new_Fixed(*this);
	this->operator--();
	return (new_Fixed);
}

Fixed Fixed::operator--(void)
{
	this->_val--;
	return (*this);
}

Fixed & Fixed::min (Fixed &one, Fixed &two)
{
	if (one < two)
		return (one);
	return (two);
}

Fixed const & Fixed::min (Fixed const &one, Fixed const &two)
{
	if (one < two)
		return (one);
	return (two);
}

Fixed & Fixed::max (Fixed &one, Fixed &two)
{
	if (one > two)
		return (one);
	return (two);
}

Fixed const & Fixed::max (Fixed const &one, Fixed const &two)
{
	if (one > two)
		return (one);
	return (two);
}