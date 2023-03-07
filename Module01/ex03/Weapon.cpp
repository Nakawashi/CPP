#include "Weapon.hpp"

Weapon::Weapon(void){}

Weapon::Weapon(std::string type) : _type(type){}

Weapon::~Weapon(void){}

// Une fonction membre getType() retournant une référence constante sur type.
std::string	const * Weapon::getType(void) const
{
	return (&(this->_type));
}

// Une fonction membre setType() qui attribue à type la nouvelle valeur passée en paramètre.
void	Weapon::setType(std::string type)
{
	this->_type = type;
}
