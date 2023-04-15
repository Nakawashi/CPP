 #include "Animal.hpp"
 #include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
Animal::Animal(void)
: _type("animal")
{
	std::cout << BLUE << "[Animal] default constructor called" << NONE << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << BLUE << "[Animal] copy constructor called" << NONE << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << BLUE << "[Animal] default destructor called" << NONE << std::endl;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << BLUE << "[Animal] copy assignement operator called" << NONE << std::endl;
	if (this != &rhs)
		this->_type = rhs.get_type();
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

// ----- Getters - Setters----------------------------------------------------//

std::string	Animal::get_type(void) const
{
	return this->_type;
}

void	Animal::set_type(std::string type)
{
	this->_type = type;
}
// ----- Getters - Setters----------------------------------------------------//

std::ostream&	operator<<(std::ostream& stream, const Animal &rhs)
{
	stream << BLUE << "[Animal] type : " << rhs.get_type() << NONE << std::endl;
	return stream;
}
