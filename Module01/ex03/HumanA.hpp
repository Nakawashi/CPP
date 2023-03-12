#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

/*
	Human aura forcément une arme : reference sur une instance de Weapon
*/
class HumanA
{
public:
	HumanA(void);
	HumanA(std::string name, Weapon& weapon); // la fonction prend maintenant une référence sur une instance de Weapon
	~HumanA(void);

	void		attack(void) const;

private:
	Weapon 		_weapon;
	std::string	_name;

};

#endif
