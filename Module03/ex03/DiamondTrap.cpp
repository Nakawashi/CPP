#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

/*
	En faisant comme ca les attributs de mon instance DiamondTrap vont avoir
	les memes valeurs que ClapTrap sans prendre en compte les constructeurs de
	Scav et Frag. Ces derniers sont virtuels, heritage en diamand

ClapTrap default constructor called
ScavTrap default constructor called
FragTrap default constructor called
DiamondTrap default constructor called

DiamondTrap Tiny Tina Infos :
HP : 10
Energy points : 10
Attack damage : 0

DiamondTrap destructor called. Only ClapTrap is left
FragTrap destructor called. Only ClapTrap is left
ScavTrap destructor called. Only ClapTrap is left
ClapTrap destructor called

	on decoule une seule fois de ClapTrap. L'instance de DiamondTrap prendra une
	seule fois de la memoire vu que les attributa vont pointer directement sur ceux
	de ClapTrap, une seule fois.
	Si on ne met pas en virtual, on aurait eu ClapTrap a double (Scav -> Clap puis Frag->Clap)
	au lieu de (Diamond -> Frag -> Scav -> Clap)
*/
// DiamondTrap::DiamondTrap(void)
// : ClapTrap(), ScavTrap(), FragTrap(), _name("default_clap_name")
// {
// 	std::cout << "DiamondTrap default constructor called" << std::endl;
// 	this->_hitPoints = FragTrap::_hitPoints;
// 	this->_energyPoints = ScavTrap::_energyPoints;
// 	this->_attackDamages = FragTrap::_attackDamages;
// }

DiamondTrap::DiamondTrap(void)
: ClapTrap(), ScavTrap(), FragTrap(), _name("default")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamages = 30;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap <name> constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamages = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

// question : on ne pourrait pas override celle de la super-classe?
DiamondTrap &	DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
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

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << YELLOW << "DiamondTrap'name : " << this->_name << "\n";
	std::cout << "ClapTrap'name : " << ClapTrap::_name << NONE << std::endl;
}

std::ostream & operator<<(std::ostream &stream, const DiamondTrap &rhs)
{
	stream << "\nDiamondTrap " << rhs.getName() << " Infos :\n";
	stream << "HP (Frag): " << rhs.getHP() << "\n";
	stream << "Energy points (Scav) : " << rhs.getEnergyPoints() << "\n";
	stream << "Attack damage (Frag): " << rhs.getAttackDmg() << "\n";

	return stream;
}
