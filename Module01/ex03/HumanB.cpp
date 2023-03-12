#include "HumanB.hpp"
#include <iostream>


HumanB::HumanB(void) {}

HumanB::HumanB(std::string name, Weapon weapon) : _name(name),  _weapon(NULL){}

HumanB::~HumanB(void) {}

void	HumanB::attack(void)
{
	std::cout << this->_name << "attacks with their" << this->_weapon.getType() << std::endl;
}