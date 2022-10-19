
#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>

static void	toChar(double num)
{
	std::cout << "char: ";
	if (!isascii(num) || std::isnan(num) || std::isinf(num))
		std::cout << "impossible";
	else if (!isprint(num))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(num) << "'";
	std::cout << std::endl;
}

static void	toInt(double num)
{
	std::cout << "int: ";
	if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max() ||
		std::isinf(num) || std::isnan(num))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(num);
	std::cout << std::endl;
}

static void toFloat(double num)
{
	std::cout << "float: ";
	if (std::isinf(num) || std::isnan(num))
		std::cout << num;
	else if (num && (num < -std::numeric_limits<float>::max() || num > std::numeric_limits<float>::max()))
		std::cout << "impossible";
	else
		std::cout << static_cast<float>(num);
	std::cout << "f" << std::endl;
}

static void toDouble(double num)
{
	std::cout << "double: ";
	if (std::isinf(num) || std::isnan(num))
		std::cout << num;
	else if (num && (num < -std::numeric_limits<double>::max() || num > std::numeric_limits<double>::max()))
		std::cout << "impossible";
	else
		std::cout << static_cast<double>(num);
	std::cout << std::endl;
}

int main(int argc, char** argv)
{
	double num;

	if (argc != 2)
	{
		std::cout << "./convert <your value>" << std::endl;
		return 1;
	}
	num = std::strtod(argv[1], NULL);
	std::cout.precision(1);
	std::cout << std::fixed;
	toChar(num);
	toInt(num);
	toFloat(num);
	toDouble(num);

	return 0;
}