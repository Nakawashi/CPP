#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	master("Lucie");
	ScavTrap	test;

	std::cout << master << std::endl;
	std::cout << test << std::endl;

	test.guardGate();
	test.attack("youyou");

	master.attack("bernardo");

	std::cout << test << std::endl;
	std::cout << master << std::endl;

	return 0;
}
