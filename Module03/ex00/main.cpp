#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap nouveau;
	ClapTrap test("Maya");

	nouveau.setAttackDmg(9);
	nouveau.attack(test.getName());
	nouveau.beRepaired(2);
	nouveau.takeDamage(10);
	return 0;
}
