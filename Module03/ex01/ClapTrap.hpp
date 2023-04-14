#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

public:
	//Coplien//
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(std::string name, int hp, int energy, int atkdmg);
	ClapTrap(const ClapTrap &src);
	~ClapTrap(void);
	ClapTrap &	operator=(const ClapTrap &rhs);
	//-Coplien//

	//Getters//
	std::string		getName(void) const;
	unsigned int	getHP(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDmg(void) const;
	//-Getters//

	//Setters//
	void			setName(std::string name);
	void			setHP(unsigned int hitPoints);
	void			setEnergyPoints(unsigned int energyPoints);
	void			setAttackDmg(unsigned int attackDamages);
	//-Setters//

	void	attack(const std::string &target);
	void	beRepaired(unsigned int amount);
	void	takeDamage(unsigned int amount);

protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamages;
};

std::ostream & operator<<(std::ostream &stream, const ClapTrap &rhs);

#endif
