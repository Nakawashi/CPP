#include "Fixed.hpp"


// -------------------------- Constructors ------------------------//

const int	Fixed::_fractional_bits = NB_FRACTIONAL_BITS;

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "copy constructor called" << std::endl;
	*this = src;
}

/*
	Conversion d'un entier vers un valeur en virgule fixe en multipliant
	la valeur entiere par 2^8 (decaler 8 fois les bits vers la gauche)

	_fractional_bits vaut 8. Ainsi, si vous donnez la valeur 42 au constructeur,
	la valeur de _rawBits sera égale à 42 décalé de 8 bits vers la gauche,
	c'est-à-dire 10752.
	En d'autres termes, le constructeur prend la valeur entière en entrée,
	la convertit en nombre à virgule fixe et stocke le résultat dans
	l'attribut privé _rawBits de la classe Fixed.

	Faire simplement la demo avec la calculatrice.
*/
Fixed::Fixed(const int value) : _rawBits(value << _fractional_bits)
{
	std::cout << "int to fixed constructor called" << std::endl;
}

/*
	La valeur en virgule flottante est multipliée par 2^8 (soit le nombre de bits
	de la partie fractionnaire) et arrondie a l'aide de la fonction roundf()
	autorisée pour cet exercice.

	1 << 8 équivaut à faire 2^8 (=256)
*/
Fixed::Fixed(const float value)
{
	std::cout << "float to fixed constructor called" << std::endl;
	this->_rawBits = roundf(value * (1 << _fractional_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "destructor called" << std::endl;
}


// ------------------------- usage methods ------------------------//

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


// ------------------ Inner operator overload ---------------------//

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->_rawBits + rhs.getRawBits()); // copie créée ici
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->_rawBits - rhs.getRawBits());
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->_rawBits * rhs.getRawBits());
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->_rawBits / rhs.getRawBits());
}




// ------------------ Outer operator overload ---------------------//

// std::ostream & operator<<(std::ostream & o, const Fixed & rhs){
// 	o << "The value of _fixedPointNb is : " << rhs.getRawBits();
// 	return o;
// }

// A savoir que cout est une instance de ostream
std::ostream & operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return o;
}
