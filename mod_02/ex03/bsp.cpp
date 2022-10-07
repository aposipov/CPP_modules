
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed tmp_a;
	Fixed tmp_b;
	Fixed tmp_c;

	tmp_a =  (a.get_x() - point.get_x()) * (b.get_y() - a.get_y())
			- (b.get_x() - a.get_x()) * (a.get_y() - point.get_y());
	tmp_b =  (b.get_x() - point.get_x()) * (c.get_y() - b.get_y()) - (c.get_x
			() - b.get_x()) * (b.get_y() - point.get_y());
	tmp_c =  (c.get_x() - point.get_x()) * (a.get_y() - c.get_y())
			- (a.get_x() - c.get_x()) * (c.get_y() - point.get_y());

	if ((tmp_a > 0 && tmp_b > 0 && tmp_c > 0) || (tmp_a < 0 && tmp_b < 0 && tmp_c < 0))
		return 1;
	return 0;
}