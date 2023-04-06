#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called. Only ClapTrap is left" << std::endl;
}

ScavTrap::ScavTrap(void)
: ClapTrap(void),_name("Zero"), _hitPoints(100), _energyPoints(50), _attackDamages(20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name), _hitPoints(100), _energyPoints(50), _attackDamages(20)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name, int hp, int energy, int atkdmg)
: ClapTrap(name), _hitPoints(hp), _energyPoints(energy), _attackDamages(atkdmg)
{
	std::cout << "ScavTrap all init constructor called" << std::endl;
}

