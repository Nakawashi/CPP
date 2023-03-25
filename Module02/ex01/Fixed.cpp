#include "Fixed.hpp"

const int	Fixed::_fractional_bits = NB_FRACTIONAL_BITS;

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/*
	Conversion d'un entier vers un valeur en virgule fixe en multipliant
	la valeur entiere par 2^8.
*/
Fixed::Fixed(const int raw) : _rawBits(raw << _fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

/*
	La valeur en virgule flottante est multipliée par 2^8 (soit le nombre de bits
	de la partie fractionnaire) et arrondie a l'aide de la fonction roundf()
	autorisée pour cet exercice.
*/
Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(raw * (1 << _fractional_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

/*
	divisant la valeur en virgule fixe par la puissance de 2 correspondant
	au nombre de bits de la partie fractionnaire.
	Le résultat est renvoyé en tant que nombre à virgule flottante.
*/
float	Fixed::toFloat(void) const
{
	return ((float)_rawBits) / (1 << _fractional_bits);
}

/*
	Décalage vers la droite de this->_bits bits pour enlever
	la partie fractionnaire de la représentation en virgule fixe.
	Le résultat est ensuite retourné en tant qu'entier.
*/
int		Fixed::toInt(void) const
{
	return this->_rawBits >> this->_fractional_bits;
}

// std::ostream & operator<<(std::ostream & o, const Fixed & rhs){
// 	o << "The value of _fixedPointNb is : " << rhs.getRawBits();
// 	return o;
// }

std::ostream & operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return o;
}
