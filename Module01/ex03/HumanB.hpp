#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

/*
	HumanB peut ne pas avoir d'arme : pointeur sur une instance de Weapon
*/
class HumanB
{
public:
	HumanB(std::string name);
	~HumanB(void);

	void		attack(void);
	void		setWeapon(Weapon &weapon);

private:
	HumanB(void);
	std::string	_name;
	Weapon 		*_weapon;
};

#endif
