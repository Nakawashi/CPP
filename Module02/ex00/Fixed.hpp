#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

# define NB_FRACTIONAL_BITS 8

class Fixed {
public:
	Fixed();
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					_rawBits;			// stock la valeur du nombre en virgule fixe
	static const int	_fractional_bits;	// stock le nb de bits de la partie fractionnaire a 8
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
