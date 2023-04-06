#include "ScavTrap.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called. Only ClapTrap is left" << std::endl;
}

ScavTrap::ScavTrap(void)
: ClapTrap("Zero", 100, 50, 20), _guardGateMode(false)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name, 100, 50, 20), _guardGateMode(false)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
}
// ----- Constructors (canonical form) ---------------------------------------//

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is entered in Gate Keeper mode" << std::endl;
	this->_guardGateMode = true;
}
