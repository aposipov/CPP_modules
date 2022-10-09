
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Test");
	DiamondTrap b(a);

	a.whoAmI();
	b.whoAmI();
	b.attack("targetX");
	return 0;
}
