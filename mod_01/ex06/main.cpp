
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl man;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}

	man.complain(argv[1]);
	return 0;
}