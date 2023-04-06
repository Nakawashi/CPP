#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
: ClapTrap::ClapTrap(void) : _name("Tiny Tina"), _hitPoints(10), _energyPoints(10), _attackDamages(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}
