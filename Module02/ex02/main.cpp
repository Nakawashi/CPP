#include "Fixed.hpp"

int	main(void)
{
	// ---- TESTS 1 ----
	// Fixed	c(10);
	// Fixed	b(2);
	// Fixed	e;
	// int res = 0;

	// std::cout << "c " << c << std::endl;
	// std::cout << "c.getRawBits() " << c.getRawBits() << std::endl;
	// std::cout << "b " << b << std::endl;
	// std::cout << "b.getRawBits() " << b.getRawBits() << std::endl;

	// std::cout << "e.setRawBits(c.getRawBits() + b.getRawBits()) " << std::endl;

	// e.setRawBits(c.getRawBits() + b.getRawBits());

	// std::cout << "e._rawBits " << e.getRawBits() << std::endl;
	// res = e.getRawBits() / 256;
	// std::cout << "res " << res << std::endl;


	// ---- TESTS 2 ----
	Fixed	a;
	const Fixed	b(Fixed(5.05f) * Fixed(2));

	std::cout << "\na " << "\t" << std::right << a << std::endl;
	std::cout << "++a " << "\t" << ++a << std::endl;
	std::cout << "a " << "\t" << a << std::endl;
	std::cout << "a++ " << "\t"  << a++ << std::endl;
	std::cout << "a " << "\t" << a << std::endl;
	std::cout << "b " << "\t" << b << std::endl;
	std::cout << "max a,b" << "\t" << Fixed::max(a, b) << std::endl;

	return 0;
}
