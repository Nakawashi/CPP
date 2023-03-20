#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		nbZombies = 10;

	horde = zombieHorde(nbZombies, "Pouet");
	for (int i = 0; i < nbZombies; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
