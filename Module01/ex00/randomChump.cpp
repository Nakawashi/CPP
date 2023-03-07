#include "Zombie.hpp"

/*
	Creates a new Zombie
	Name it
	Make him introduce itself
*/
void	randomChump(std::string name)
{
	Zombie	zombie(name);
	zombie.announce();
}
