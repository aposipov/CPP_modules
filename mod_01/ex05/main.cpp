
#include "Harl.hpp"

int	main(void)
{
	Harl man;

	man.complain("DEBUG");
	man.complain("INFO");
	man.complain("WARNING");
	man.complain("ERROR");

	man.complain("ER");
	return 0;
}