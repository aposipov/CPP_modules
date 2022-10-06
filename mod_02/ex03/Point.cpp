
#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::~Point(void)
{
	return ;
}

Point::Point(float const x, float const	y) : _x(x), _y(y)
{
	return ;
}

Point::Point(Fixed const& x, Fixed const &y) : _x(x), _y(y)
{
	return ;
}

Point::Point(Point const & copy): _x(copy._x), _y(copy._y)
{
	// std::cout << "Copy constructor called point" << std::endl;
	return ;
}

Point & Point::operator=(Point const & copy)
{
	if (this == & copy)
		return *this;

	std::cout << "Copy assignment operator called point cant change  " << std::endl;

	return *this;
}

bool Point::operator==(Point const &other) const
{
	if (this->_x == other._x && this->_y == other._y)
		return true;
	return false;
}

Fixed const &Point::get_x() const
{
	return this->_x;
}

Fixed const &Point::get_y() const
{
	return this->_y;
}
