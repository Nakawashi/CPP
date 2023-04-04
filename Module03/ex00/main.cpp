#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap nouveau;
	std::cout << nouveau.getName() << "\n";
	std::cout << nouveau.getHP() << "\n";
	std::cout << nouveau.getEnergyPoints() << "\n";
	std::cout << nouveau.getAttackDmg() << std::endl;
	return 0;
}
