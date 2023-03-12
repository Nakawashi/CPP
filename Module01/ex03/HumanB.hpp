#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

/*
	HumanB peut ne pas avoir d'arme : pointeur sur une instance de Weapon
*/
class HumanB
{
public:
	HumanB(void);
	HumanB(std::string name);
	HumanB(std::string name, Weapon *weapon);
	~HumanB(void);

	void		attack(void) const;
	void		setWeapon(Weapon &weapon);

private:
	std::string	_name;
	Weapon 		*_weapon;
};

#endif
