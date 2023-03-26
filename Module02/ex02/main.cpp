#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	// const Fixed	b(Fixed(5.05f) * Fixed(2));

	Fixed	c(10);
	Fixed	b(2);
	Fixed	e;

	std::cout << "c " << c << std::endl;
	std::cout << "b " << b << std::endl;
	e = c + b;
	std::cout << "e " << e / 256 << std::endl; // pk il veut pas se diviser wsh
	std::cout << "e " << e << std::endl;

/* 	std::cout << "\na" << a << std::endl;
	std::cout << "++a" << ++a << std::endl;
	std::cout << "a" << a << std::endl;
	std::cout << "a++" << a++ << std::endl;
	std::cout << "a" << a << std::endl;

	std::cout << "\nb" << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl; */
	return 0;
}
