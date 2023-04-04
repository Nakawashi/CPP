#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

public:
	//Coplien//
	ClapTrap(void);									// default
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);					//constructeur par copie
	~ClapTrap(void);								//destructeur (virtuel)
	ClapTrap	&operator=(const ClapTrap &rhs);	//operateur assignation =
	//-Coplien//

	//Getters//
	std::string		getName(void);
	unsigned int	getHP(void);
	unsigned int	getEnergyPoints(void);
	unsigned int	getAttackDmg(void);
	//-Getters//

	//Setters//
	//-Setters//

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);


private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamages;
};

std::ostream & operator<<(std::ostream &stream, const ClapTrap &rhs);

#endif
