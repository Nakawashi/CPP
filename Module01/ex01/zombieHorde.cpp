#include "Zombie.hpp"

/*
	return an array of zombies, all have the same name
*/
Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zArray;

	zArray = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zArray[i].setName(name);
	}
	return (zArray);
}
