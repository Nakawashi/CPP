#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap nouveau;
	ClapTrap test("Maya");

	nouveau.setAttackDmg(5);
	nouveau.attack(test.getName());
	nouveau.beRepaired(5);
	nouveau.takeDamage(20);

	std::cout << nouveau << std::endl;
	std::cout << test << std::endl;
	return 0;
}
