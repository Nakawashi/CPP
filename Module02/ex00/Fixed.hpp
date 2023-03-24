#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed(int _fixedPointNb = 0);
	Fixed(int fixedPointNb);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);
	const int getFixedPointNb(void) const;

private:
	int					_fixedPointNb;	// stock la valeur du nombre en virgule fixe
	static const int	_b;				// stock
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
