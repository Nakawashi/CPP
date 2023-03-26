#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>	// roundf()

# define NB_FRACTIONAL_BITS 8

class Fixed {
public:
	// constructors
	Fixed();
	Fixed(Fixed const &src);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);

	// usage methods - member functions
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	// inner operator overloading
	Fixed & operator=(Fixed const &rhs);
	Fixed	operator+(Fixed const &rhs) const; // const car obligé de faire une copie
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;

private: //fixed(32,8) 8 bits sont alloues pour les valeurs a droite de la virgule dans les 32 totaux
	int					_rawBits;			// stock la valeur du nombre en virgule fixe
	static const int	_fractional_bits;	// nb de bits qu'on veut allouer au point, puissance a laqelle on va decaler
};

// outer operator overloading
// std::ostream & operator<<(std::ostream &o, const Fixed &rhs);
std::ostream & operator<<(std::ostream &o, const Fixed &rhs);

#endif
