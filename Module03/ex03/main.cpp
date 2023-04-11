#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	master("Lucie");
	ScavTrap	first;
	FragTrap	test;

	std::cout << master << std::endl;
	std::cout << first << std::endl;
	std::cout << test << std::endl;

	master.attack("bernardo");

	first.attack("random");

	test.highFivesGuys();
	test.attack("youyou");


	std::cout << test << std::endl;
	std::cout << first << std::endl;
	std::cout << master << std::endl;

	return 0;
}
