#include "DiamondTrap.hpp"

int	main(void)
{
	ScavTrap	scav;
	FragTrap	frag;
	DiamondTrap	monster;
	DiamondTrap	diamond("diamond");

	diamond.attack("random");
	diamond.highFivesGuys();

	std::cout << scav << std::endl;
	std::cout << frag << std::endl;
	std::cout << monster << std::endl;
	std::cout << diamond << std::endl;

	monster.whoAmI();
	diamond.whoAmI();

	return 0;
}
