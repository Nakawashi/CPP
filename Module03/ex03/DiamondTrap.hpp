#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	//Coplien//
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &src);
	~DiamondTrap(void);
	DiamondTrap	&operator=(const DiamondTrap &rsh);
	//Coplien//

	void	attack(const std::string &target);
	void	whoAmI(void);


private:
	std::string	_name; // attribut masqué
};

std::ostream & operator<<(std::ostream &stream, const DiamondTrap &rhs);

#endif
