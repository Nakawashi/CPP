#include "WrongAnimal.hpp"
#include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
WrongAnimal::WrongAnimal(void)
: _type("WrongAnimal")
{
	std::cout << BLUE << "[WrongAnimal] default constructor called" << NONE << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << BLUE << "[WrongAnimal] copy constructor called" << NONE << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << BLUE << "[WrongAnimal] default destructor called" << NONE << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << BLUE << "[WrongAnimal] assignement operator called" << NONE << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

// ----- Getters - Setters----------------------------------------------------//

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}
// ----- Getters - Setters----------------------------------------------------//

void	WrongAnimal::makeSound(void) const
{
	std::cout << BLUE << "\n[WrongAnimal] make an undefined sound\n" << NONE << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, const WrongAnimal &rhs)
{
	stream << BLUE << "\n[WrongAnimal] type : " << rhs.getType() << NONE << std::endl;
	return stream;
}
