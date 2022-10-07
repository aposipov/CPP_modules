
#include "Point.hpp"



int main( void )
{
	Point test1(0, 0);
	Point test2(10.10f, 10.10f);

	Point a(0, 0);
	Point b(30, 0);
	Point c(0, 40);

	std::cout << std::endl << "=== result 1 ===" << std::endl;
	if (bsp(a, b, c, test1))
		std::cout << std::endl << "Point is inside the triangle!" << std::endl;
	else
		std::cout << std::endl << "Point is outside the triangle!" << std::endl;

	std::cout << std::endl << "=== result 2 ===" << std::endl;
	if (bsp(a, b, c, test2))
		std::cout << std::endl << "Point is inside the triangle!" << std::endl;
	else
		std::cout << std::endl << "Point is outside the triangle!" << std::endl;

	return 0;
}