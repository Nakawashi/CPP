#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	master;
	ScavTrap	scav;

	std::cout << master << std::endl;
	std::cout << scav << std::endl;

	scav.guardGate();
	scav.attack("youyou");
	scav.takeDamage(5);

	master.attack("bernardo");

	std::cout << scav << std::endl;
	std::cout << master << std::endl;
	return 0;
}
