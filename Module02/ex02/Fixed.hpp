#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip> // std::setw()
# include <cmath>	// roundf()

# define NB_FRACTIONAL_BITS 8

class Fixed {
public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

	// Assignment
	Fixed				&operator=(const Fixed &rhs);

	// Arithmetic
	Fixed				operator+(const Fixed &rhs) const; // const car on cree et renvoie une copie, obligatoire pour chainer les operations
	Fixed				operator-(const Fixed &rhs) const;
	Fixed				operator*(const Fixed &rhs) const;
	Fixed				operator/(const Fixed &rhs) const;
	Fixed				&operator++();
	Fixed				operator++(int);
	Fixed				&operator--();
	Fixed				operator--(int);

	// Comparison
	bool				operator>(const Fixed &rhs) const;
	bool				operator<(const Fixed &rhs) const;
	bool				operator>=(const Fixed &rhs) const;
	bool				operator<=(const Fixed &rhs) const;
	bool				operator==(const Fixed &rhs) const;
	bool				operator!=(const Fixed &rhs) const;

	static Fixed		min(Fixed &a, Fixed &b); // static : pour ne pas dependre d'une instance. On l'utilise directement et pas en faisant a.min(b) mais plitot min(a, b); Outil de la classe, independant des instances.
	static Fixed		max(Fixed &a, Fixed &b);
	const static Fixed	min(const Fixed &a, const Fixed &b);
	const static Fixed	max(const Fixed &a, const Fixed &b);

private: //fixed(32,8) 8 bits sont alloues pour les valeurs a droite de la virgule dans les 32 totaux
	int					_rawBits;			// stock la valeur du nombre en virgule fixe
	static const int	_fractional_bits;	// nb de bits qu'on veut allouer au point, puissance a laqelle on va decaler
};

// outer operator overloading "friend"
std::ostream & operator<<(std::ostream &stream, const Fixed &rhs);

#endif
