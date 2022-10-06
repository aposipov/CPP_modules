
#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"

class Point{

public:
	Point();
	Point(float const x, float const y);
	Point(Fixed const& x, Fixed const& y);
	Point(Point const & copy);
	Point & operator=(Point const & copy);
	bool operator==(Point const &other) const;

	~Point();

	Fixed const & get_x() const;
	Fixed const & get_y() const;

private:
	Fixed const	_x;
	Fixed const	_y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
