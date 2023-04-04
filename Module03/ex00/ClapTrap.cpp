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

// the new object is initiated from the copy of an other existing object
ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "copy constructor called" << std::endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &rhs) // protection contre l'auto-assignement
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHP();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamages = rhs.getAttackDmg();
	}
	return *this;
}

// ----- Constructors (canonical form) ---------------------------------------//

// getters
std::string		ClapTrap::getName(void) const
{
	return this->_name;
}

unsigned int	ClapTrap::getHP(void) const
{
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDmg(void) const
{
	return this->_attackDamages;
}

