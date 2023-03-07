#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	std::string	const * getType(void) const;
	void		setType(std::string type);

};

#endif

/*

Maintenant, créez deux classes HumanA et HumanB. Toutes deux possèdent une
Weapon et un name, ainsi qu’une fonction membre attack() affichant (sans les chevrons
bien sûr) :
<name> attacks with their <weapon type>
HumanA et HumanB sont presque identiques, à l’exception de deux petits détails :
• Alors que le constructeur de HumanA prend une Weapon comme paramètre, ce
n’est pas le cas de celui de HumanB.
• HumanB n’aura pas toujours une Weapon, tandis que HumanA en aura forcé-
ment une


*/