
#include "iter.h"

int main()
{
	std::cout << std::endl << "< CHAR >" << std::endl;
	char arrCh[4] = {'a', 'b', 'c', 'd'};
	iter(arrCh, 4, printArr);

	std::cout << std::endl << "< INT >" << std::endl;
	int arrInt[4] = {1, 2, 21, 42};
	iter(arrInt, 4, printArr);

	std::cout << std::endl << "< FLOAT >" << std::endl;
	float arrFl[4] = {21.0f, 42.0f, 2.1f, 0.42f};
	iter(arrFl, 4, printArr);

	std::cout << std::endl;

	return 0;
}
