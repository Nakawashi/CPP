#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>	// roundf()

# define NB_FRACTIONAL_BITS 8

class Fixed {
public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	// Assignment
	Fixed				&operator=(const Fixed &rhs);

	// Arithmetic
	Fixed				operator+(const Fixed &rhs) const; // const car obligé de faire une copie
	Fixed				operator-(const Fixed &rhs) const;
	Fixed				operator*(const Fixed &rhs) const;
	Fixed				operator/(const Fixed &rhs) const;
	Fixed				&operator++();
	Fixed				operator++(int);
	Fixed				&operator--();
	Fixed				operator--(int);

	static Fixed		min(Fixed &a, Fixed &b);
	const static Fixed	min(const Fixed &a, const Fixed &b);
	static Fixed		max(Fixed &a, Fixed &b);
	const static Fixed	max(const Fixed &a, const Fixed &b);

	// Comparison
	bool				operator>(const Fixed &rhs) const;
	bool				operator<(const Fixed &rhs) const;
	bool				operator>=(const Fixed &rhs) const;
	bool				operator<=(const Fixed &rhs) const;
	bool				operator==(const Fixed &rhs) const;
	bool				operator!=(const Fixed &rhs) const;

private: //fixed(32,8) 8 bits sont alloues pour les valeurs a droite de la virgule dans les 32 totaux
	int					_rawBits;			// stock la valeur du nombre en virgule fixe
	static const int	_fractional_bits;	// nb de bits qu'on veut allouer au point, puissance a laqelle on va decaler
};

// outer operator overloading "friend"
std::ostream & operator<<(std::ostream &o, const Fixed &rhs);

#endif
