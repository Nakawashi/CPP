#include "Zombie.hpp"

/*
	retounr un tableau de type Zombie qui auront le meme nom
*/
Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zArray;

	zArray = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zArray[i].setName(name);
	}
	return (zArray);
}
