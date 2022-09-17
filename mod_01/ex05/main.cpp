
#include "harl.hpp"

int	main(void)
{
	Harl man;

	man.complain("DEBUG");
//	man.complain("INFO");
	man.complain("WARNING");
//	man.complain("ERROR");
	man.complain("ERRORAA");
//	man.complain("WARNINGAA");
//	man.complain("WARNING");
//	man.complain("WARNING");
	return 0;
}