#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	//Coplien//
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);
	ScavTrap	&operator=(const ScavTrap &rsh);
	//Coplien//

	void	attack(const std::string &target); //masquage//
	void	guardGate(void);

	//Getters, setters//
	bool	getGuardMode(void) const;
	void	setGuardMode(bool value);
	//Getters, setters//

private:
	bool	_guardGateMode;
};

std::ostream & operator<<(std::ostream &stream, const ScavTrap &rhs);

#endif
