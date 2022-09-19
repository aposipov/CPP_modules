
#include "Fixed.hpp"

//Fixed::Fixed() : rawBits(0) {
//
//	std::cout << "Default constructor called" << std::endl;
//}
//Fixed::Fixed(const Fixed& copyFrom) {
//
//	std::cout << "Copy constructor called" << std::endl;
//	*this = copyFrom;
//}
//Fixed& Fixed::operator=(Fixed const & rightSide) {
//
//	std::cout << "Copy assignment operator called" << std::endl;
//	if (this == &rightSide)
//		return *this;
//	rawBits = rightSide.getRawBits();
//	return *this;
//}
//
//Fixed::~Fixed() {
//
//	std::cout << "Destructor called" << std::endl;
//}
//
//int Fixed::getRawBits(void) const {
//
//	std::cout << "getRawBits member function called" << std::endl;
//	return rawBits;
//}
//
//void Fixed::setRawBits(int const raw) {
//
//	rawBits = raw;
//}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_val = 0;
	return;
}

Fixed::Fixed(const Fixed & ref_Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_val = ref_Fixed.getRawBits();
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & ref_Fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == & ref_Fixed) //
		return *this;

	this->_val = ref_Fixed.getRawBits();
	return *this;
}