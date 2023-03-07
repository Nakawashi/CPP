#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie = newZombie("Bernardo");
	randomChump("Roberto");

	delete heapZombie;
	return (0);
}
