#include "DiamondTrap.hpp"

int	main(void)
{
	ScavTrap	scav;
	FragTrap	frag;
	DiamondTrap	monster;

	monster.attack("random");

	std::cout << scav << std::endl;
	std::cout << frag << std::endl;
	std::cout << monster << std::endl;

	return 0;
}
