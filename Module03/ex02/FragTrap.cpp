#include "FragTrap.hpp"
#include "colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called. Only ClapTrap is left" << std::endl;
}

FragTrap::FragTrap(void)
: ClapTrap("Axton", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

// question : on ne pourrait pas override celle de la super-classe?
FragTrap &	FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->ClapTrap::operator=(rhs);
	}
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

void	FragTrap::attack(const std::string &target)
{
	if (this->getHP() == 0)
		std::cout << this->getName() << " [FragTrap] died already" << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << this->getName() << " [FragTrap] no energy, no attacks" << std::endl;
	else if ((this->getHP() > 0 && this->getHP() <= 100)
		&& (this->getEnergyPoints() > 0 && this->getEnergyPoints() <= 100))
		{
			std::cout << std::endl;

			std::cout << VIOLET << "[FragTrap] " << this->getName() << " attacks " << target;
			std::cout << ", causing " << this->getAttackDmg();
			std::cout << " points of damage !" << NONE << std::endl;

			this->setEnergyPoints(this->getEnergyPoints() - 1);
			std::cout << this->getName() << ": Energy Points amount : ";
			std::cout <<  this->getEnergyPoints() << std::endl;

			std::cout << std::endl;
		}
	else
		std::cout << "[FragTrap Warning] Invalid HP or energy value" << std::endl;
}


void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " si asking for high five hoping someone sees him" << std::endl;
}

std::ostream & operator<<(std::ostream &stream, const FragTrap &rhs)
{
	stream << "\nFragTrap " << rhs.getName() << " Infos :\n";
	stream << "HP : " << rhs.getHP() << "\n";
	stream << "Energy points : " << rhs.getEnergyPoints() << "\n";
	stream << "Attack damage : " << rhs.getAttackDmg() << "\n";

	return stream;
}
