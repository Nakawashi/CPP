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

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

// question : on ne pourrait pas override celle de la super-classe?
ScavTrap &	ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHP();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamages = rhs.getAttackDmg();
	}
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is entered in Gate Keeper mode" << std::endl;
	this->_guardGateMode = true;
}

// std::string	ScavTrap::getGuardMode(void) const
// {
// 	std::string ret = "";
// 	if (this->_guardGateMode)
// 		ret = "true";
// 	else
// 		ret = "false";
// 	return ret;
// }

bool	ScavTrap::getGuardMode(void) const
{
	return this->_guardGateMode;
}

void	ScavTrap::setGuardMode(bool value)
{
	this->_guardGateMode = value;
}

std::ostream & operator<<(std::ostream &stream, const ScavTrap &rhs)
{
	stream << "\nScavTrap " << rhs.getName() << " Infos :\n";
	stream << "HP : " << rhs.getHP() << "\n";
	stream << "Energy points : " << rhs.getEnergyPoints() << "\n";
	stream << "Attack damage : " << rhs.getAttackDmg() << "\n";
	stream << "Gate keeper mode : " << rhs.getGuardMode() << "\n" << std::flush;

	return stream;
}
