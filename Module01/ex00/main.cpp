#include "Zombie.hpp"

int	main(void)
{
	Zombie	stackZombie = Zombie("Paulo");
	Zombie	*heapZombie = new Zombie("Bernardo");

	delete heapZombie;
	return (0);
}
