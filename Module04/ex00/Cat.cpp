 #include "Cat.hpp"
 #include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
Cat::Cat(void)
: Animal()
{
	std::cout << BLUE << "[Cat] default constructor called" << NONE << std::endl;
}

Cat::Cat(std::string type)
: Animal(type)
{
	std::cout << BLUE << "[Cat] <type> constructor called" << NONE << std::endl;
}

Cat::Cat(const Cat& src)
{
	std::cout << BLUE << "[Cat] copy constructor called" << NONE << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << BLUE << "[Cat] default destructor called" << NONE << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << BLUE << "[Cat] copy assignement operator called" << NONE << std::endl;
	if (this != &rhs)
		this->_type = rhs.get_type();
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

// ----- Getters - Setters----------------------------------------------------//

std::string	Cat::get_type(void) const
{
	return this->_type;
}

void	Cat::set_type(std::string type)
{
	this->_type = type;
}
// ----- Getters - Setters----------------------------------------------------//

std::ostream&	operator<<(std::ostream& stream, const Cat &rhs)
{
	stream << BLUE << "\n[Cat] type : " << rhs.get_type() << NONE << std::endl;
	return stream;
}
