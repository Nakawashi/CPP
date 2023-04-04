#include "ClapTrap.hpp"


// ----- Constructors (canonical form) ---------------------------------------//

ClapTrap::~ClapTrap(void)
{
	std::cout << "destructor called" << std::endl;
}

ClapTrap::ClapTrap(void)
: _name("Tiny Tina"), _hitPoints(10), _energyPoints(10), _attackDamages(0)
{
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _hitPoints(10), _energyPoints(10), _attackDamages(0)
{
	this->_name = name;
	std::cout << "<name> parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "copy constructor called" << std::endl;
	*this = src;
}

// getters
std::string		ClapTrap::getName(void)
{
	return this->_name;
}

unsigned int	ClapTrap::getHP(void)
{
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void)
{
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDmg(void)
{
	return this->_attackDamages;
}

