
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{

public:
	Fixed(void);
	Fixed(const Fixed & other);
	Fixed & operator=(Fixed const & other);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int					_val;
	static const int	_bits;
};

#endif
