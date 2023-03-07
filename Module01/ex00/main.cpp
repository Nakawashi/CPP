#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie;

	heapZombie =  newZombie("Bernardo");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Roberto");
	return (0);
}
