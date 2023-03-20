#include "Zombie.hpp"

/*
	Creates a new Zombie on the stack
	Name it using the constructor
	Make him introduce itself
*/
void	randomChump(std::string name)
{
	Zombie	dead = Zombie(name);
	dead.announce();
}
