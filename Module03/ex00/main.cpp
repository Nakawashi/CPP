#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap nouveau;
	ClapTrap test("Sirene");
	std::cout << nouveau.getName() << "\n";
	std::cout << nouveau.getHP() << "\n";
	std::cout << nouveau.getEnergyPoints() << "\n";
	std::cout << nouveau.getAttackDmg() << std::endl;

	std::cout << test.getName() << "\n";
	std::cout << test.getHP() << "\n";
	std::cout << test.getEnergyPoints() << "\n";
	std::cout << test.getAttackDmg() << std::endl;

	test = nouveau;

	std::cout << "apres assignation" << "\n";

	std::cout << test.getName() << "\n";
	std::cout << test.getHP() << "\n";
	std::cout << test.getEnergyPoints() << "\n";
	std::cout << test.getAttackDmg() << std::endl;
	return 0;
}
