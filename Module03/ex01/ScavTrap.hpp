#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	//Coplien//
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(std::string name, int hp, int energy, int atkdmg);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);
	ScavTrap	&operator=(const ScavTrap &rsh);
	//Coplien//

	void	attack(const std::string &target); //masquage//
	void	guardGate(void);

private:
	bool	guardGateMode;
};

#endif
