#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string name) : _name(name){}

Zombie::~Zombie(void)
{
	// delete all strings
}

std::string	Zombie::getName()
{
	return (this->_name);
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
