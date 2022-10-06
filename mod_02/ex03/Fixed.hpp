
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

public:
	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(const Fixed & copy);
	Fixed & operator=(Fixed const & copy);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	bool operator>(Fixed const & fixed) const;
	bool operator<(Fixed const & fixed) const;
	bool operator>=(Fixed const & fixed) const;
	bool operator<=(Fixed const & fixed) const;
	bool operator==(Fixed const & fixed) const;
	bool operator!=(Fixed const & fixed) const;

	Fixed operator+(Fixed const & fixed);
	Fixed operator-(Fixed const & fixed) const;
	Fixed operator*(Fixed const & fixed);
	Fixed operator/(Fixed const & fixed);

	Fixed operator++(int);
	Fixed operator++(void);
	Fixed operator--(int);
	Fixed operator--(void);

	static Fixed & min (Fixed &one, Fixed &two);
	static Fixed const & min (Fixed const &one, Fixed const &two);
	static Fixed & max (Fixed &one, Fixed &two);
	static Fixed const & max (Fixed const &one, Fixed const &two);

private:
	int					_val;
	static const int	_bits = 8;
};

std::ostream& operator<<(std::ostream & out, const Fixed & fixed);

#endif
