
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

private:
	int					_val;
	static const int	_bits = 8;
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif
