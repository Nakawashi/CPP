#include "Zombie.hpp"

/*
	Creates a new Zombie
	Gives a name
	Returns named new Zombie
*/
Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}
