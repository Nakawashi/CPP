#include "Zombie.hpp"

/*
	Creates a new Zombie
	Gives a name
	Make him introduce itself
	Returns named and introduced new Zombie
*/
void	randomChump(std::string name)
{
	Zombie	zombie(name);
	zombie.announce();
}
