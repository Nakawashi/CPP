#include "Zombie.hpp"

/*
	Creates a new Zombie
	Name it
	Make him introduce itself
*/
void	randomChump(std::string name)
{
	Zombie	dead = Zombie(name);
	dead.announce();
}
