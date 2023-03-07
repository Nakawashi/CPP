#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie;

	heapZombie =  newZombie("Bernardo");
	heapZombie->announce();
	delete heapZombie; // Bernardo is destroyed

	randomChump("Roberto");
	return (0); // Roberto is destroyed
}
