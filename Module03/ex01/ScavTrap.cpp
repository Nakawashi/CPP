#include "ScavTrap.hpp"
#include "colors.hpp"

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

// ----- Getters -------------------------------------------------------------//
bool	ScavTrap::getGuardMode(void) const
{
	return this->_guardGateMode;
}
// ----- Getters -------------------------------------------------------------//

// ----- Setters -------------------------------------------------------------//
void	ScavTrap::setGuardMode(bool value)
{
	this->_guardGateMode = value;
}
// ----- Setters -------------------------------------------------------------//

void	ScavTrap::attack(const std::string &target)
{
	if (this->getHP() == 0)
		std::cout << this->getName() << " [ScavTrap] died already" << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << this->getName() << " [ScavTrap] no energy, no attacks" << std::endl;
	else if ((this->getHP() > 0 && this->getHP() <= 100)
		&& (this->getEnergyPoints() > 0 && this->getEnergyPoints() <= 50))
		{
			std::cout << std::endl;

			std::cout << BLUE << "[ScavTrap] " << this->getName() << " attacks " << target;
			std::cout << ", causing " << this->getAttackDmg();
			std::cout << " points of damage !" << NONE << std::endl;

			this->setEnergyPoints(this->getEnergyPoints() - 1);
			std::cout << this->getName() << ": Energy Points amount : ";
			std::cout <<  this->getEnergyPoints() << std::endl;

			std::cout << std::endl;
		}
	else
		std::cout << "[ScavTrap Warning] Invalid HP or energy value" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << YELLOW << "[ScavTrap] " << this->getName() << " is entered in Gate Keeper mode" << std::endl;
	this->_guardGateMode = true;
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
