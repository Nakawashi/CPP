#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(void) : _name("Default"), _weapon(NULL) {}

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB(void) {}

void	HumanB::attack(void)
{
	if (this->_weapon != NULL)
		std::cout << this->_name << " attacks with their " << (*this->_weapon).getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
