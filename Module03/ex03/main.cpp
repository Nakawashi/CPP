#include "DiamondTrap.hpp"

int	main(void)
{
	ScavTrap	scav;
	FragTrap	frag;
	DiamondTrap	monster;
	DiamondTrap	test1("test");

	monster.attack("random");

	std::cout << scav << std::endl;
	std::cout << frag << std::endl;
	std::cout << monster << std::endl;
	std::cout << test1 << std::endl;

	monster.whoAmI();
	test1.whoAmI();

	return 0;
}
