#include "Fixed.hpp"

int Fixed::_b = 8;

Fixed::Fixed(int _fixedPointNb = 0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(_fixedPointNb)
{
	std::cout << "Parametric constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {}

Fixed	&Fixed::operator=(const Fixed & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointNb = rhs.getFixedPointNb();
	return *this;
}

const int Fixed::getFixedPointNb(void) const
{
	return this->_getFixedPointNb;
}

std::ostream & operator<<(std::ostream & o, Sample const & rhs){
	o << "The value of _fixedPointNb is : " << rhs.getFixedPointNb();
	return o;
}
