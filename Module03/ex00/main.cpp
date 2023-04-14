#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap;
	ClapTrap test("Maya");

	clap.setAttackDmg(5);
	clap.attack(test.getName());
	clap.beRepaired(5);
	clap.takeDamage(3);

	std::cout << clap << std::endl;
	std::cout << test << std::endl;
	return 0;
}
