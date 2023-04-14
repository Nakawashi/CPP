#include "ClapTrap.hpp"
#include "colors.hpp"


// ----- Constructors (canonical form) ---------------------------------------//
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(void)
: _name("Tiny Tina"), _hitPoints(10), _energyPoints(10), _attackDamages(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _hitPoints(10), _energyPoints(10), _attackDamages(0)
{
	this->_name = name;
	std::cout << "ClapTrap <name> parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int energy, int atkdmg)
{
	this->_name = name;
	this->_hitPoints = hp;
	this->_energyPoints = energy;
	this->_attackDamages = atkdmg;
	std::cout << "ClapTrap all members init constructor called" << std::endl;
}


// the new object is initiated from the copy of an other existing object
ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap &	ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
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

// ----- Getters -------------------------------------------------------------//
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
// ----- Getters -------------------------------------------------------------//

// ----- Setters -------------------------------------------------------------//
void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHP(unsigned int hitPoints)
{
	if (this->_hitPoints > 1000000)
		this->_hitPoints = 0;
	else
		this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	if (this->_energyPoints > 1000000)
		this->_energyPoints = 0;
	else
		this->_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDmg(unsigned int attackDamages)
{
	this->_attackDamages = attackDamages;
}
// ----- Setters -------------------------------------------------------------//

void	ClapTrap::attack(const std::string &target)
{
	if (this->getHP() == 0)
		std::cout << this->getName() << " [ClapTrap] is already dead" << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << this->getName() << " [ClapTrap] can't attack, energy too low" << std::endl;
	else if ((this->getHP() > 0 && this->getHP() < 11)
		&& (this->getEnergyPoints() > 0 && this->getEnergyPoints() < 11))
		{
			std::cout << std::endl;

			std::cout << RED << "[ClapTrap] "  << this->getName() << " attacks " << target;
			std::cout << ", causing " << this->getAttackDmg();
			std::cout << " points of damage !" << NONE << std::endl;

			this->setEnergyPoints(this->getEnergyPoints() - 1);
			std::cout << this->getName() << ": new Energy Points amount : ";
			std::cout <<  this->getEnergyPoints() << std::endl;

			std::cout << std::endl;
		}
	else
		std::cout << "Invalid HP or energy value" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHP() == 0)
		std::cout << this->getName() << " is already dead" << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << this->getName() << " can't repair, energy too low" << std::endl;
	else if ((this->getHP() > 0 && this->getHP() < 11)
		&& (this->getEnergyPoints() > 0 && this->getEnergyPoints() < 11))
		{
			std::cout << std::endl;

			std::cout << GREEN << this->getName();
			std::cout << " repairs himself : + " << amount;
			std::cout << " HP !\n" << NONE;

			this->setHP(this->getHP() + amount);
			std::cout << "New HP amount : " << this->getHP() << std::endl;

			this->setEnergyPoints(this->getEnergyPoints() - 1);
			std::cout << this->getName() << ": new Energy Points amount : ";
			std::cout <<  this->getEnergyPoints() << std::endl;

			std::cout << std::endl;
		}
	else
		std::cout << "Invalid HP or energy value" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() == 0)
		std::cout << this->getName() << " is already dead" << std::endl;

	std::cout << std::endl;

	std::cout << YELLOW << this->getName() << " took " ;
	std::cout << amount << " damages.\n" << NONE;

	this->setHP(this->getHP() - amount);
	std::cout << "New HP amount : " << this->getHP() << std::endl;

	std::cout << std::endl;
}

std::ostream &	operator<<(std::ostream &stream, const ClapTrap &rhs)
{
	stream << "ClapTrap " << rhs.getName() << " Infos :\n";
	stream << "HP : " << rhs.getHP() << "\n";
	stream << "Energy points : " << rhs.getEnergyPoints() << "\n";
	stream << "Attack damage : " << rhs.getAttackDmg() << "\n" << std::flush;

	return stream;
}
