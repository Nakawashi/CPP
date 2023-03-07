#include "Zombie.hpp"

/*
	Creates a new Zombie
	Name it
	Returns a new named Zombie
*/
Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}
