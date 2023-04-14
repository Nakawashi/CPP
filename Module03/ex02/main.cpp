#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	master;
	ScavTrap	scav("Bernardina");
	FragTrap	frag;

	std::cout << master << std::endl;
	std::cout << scav << std::endl;
	std::cout << frag << std::endl;

	master.attack("bernardo");

	scav.attack("random");

	frag.highFivesGuys();
	frag.attack("youyou");


	std::cout << frag << std::endl;
	std::cout << scav << std::endl;
	std::cout << master << std::endl;

	return 0;
}
