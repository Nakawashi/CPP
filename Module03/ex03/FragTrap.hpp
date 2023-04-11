#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	//Coplien//
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	~FragTrap(void);
	FragTrap	&operator=(const FragTrap &rsh);
	//Coplien//

	void	attack(const std::string &target); //masquage//
	void	highFivesGuys(void);
};

std::ostream & operator<<(std::ostream &stream, const FragTrap &rhs);

#endif
