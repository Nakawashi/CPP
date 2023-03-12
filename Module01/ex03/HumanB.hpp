#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(void);
	HumanB(std::string name, Weapon weapon); // la fonction prend maintenant une référence sur une instance de Weapon
	~HumanB(void);

	void	attack(void);

private:
	Weapon 		_weapon;
	std::string	_name;

};

#endif
