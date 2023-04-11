#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap nouveau;
	ClapTrap test("Maya");

	nouveau.setAttackDmg(9);
	nouveau.attack(test.getName());
	nouveau.beRepaired(2);
	nouveau.takeDamage(13);

	std::cout << nouveau << std::endl;
	return 0;
}
