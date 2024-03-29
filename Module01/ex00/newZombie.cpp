#include "Zombie.hpp"

/*
	Creates a new Zombie on the heap
	Name it using constructor
	Returns a new named Zombie
*/
Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}
