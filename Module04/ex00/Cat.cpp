 #include "Cat.hpp"
 #include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
Cat::Cat(void)
: Animal(), _type("Cat")
{
	std::cout << VIOLET << "[Cat] default constructor called" << NONE << std::endl;
}

Cat::Cat(std::string type)
: Animal(), _type(type)
{
	std::cout << VIOLET << "[Cat] <type> constructor called" << NONE << std::endl;
}

Cat::Cat(const Cat& src)
{
	std::cout << VIOLET << "[Cat] copy constructor called" << NONE << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << VIOLET << "[Cat] default destructor called" << NONE << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << VIOLET << "[Cat] assignement operator called" << NONE << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

// ----- Getters - Setters----------------------------------------------------//

std::string	Cat::getType(void) const
{
	return this->_type;
}

void	Cat::setType(std::string type)
{
	this->_type = type;
}
// ----- Getters - Setters----------------------------------------------------//

// On aurait pu prendre en parametre une ref sur Animal ou un pointeur sur Animal pour creer une resolution dynamique des liens avec une fonction tierce
void	Cat::makeSound(void) const
{
	std::cout << VIOLET << "\n[Cat] meows\n" << NONE << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, const Cat &rhs)
{
	stream << VIOLET << "\n[Cat] type : " << rhs.getType() << NONE << std::endl;
	return stream;
}
