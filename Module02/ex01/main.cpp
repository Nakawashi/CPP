#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	const Fixed	b(10);
	const Fixed	c(42.42f);
	const Fixed	d(b);

	a = Fixed(1234.4321f);

	std::cout << "\na is " << a << "\n";
	std::cout << "b is " << b << "\n";
	std::cout << "c is " << c << "\n";
	std::cout << "_rawBits is " << c.getRawBits() << "\n";
	std::cout << "d is " << d << "\n\n";

	std::cout << "a is " << a.toInt() << " as integer" << "\n";
	std::cout << "b is " << b.toInt() << " as integer" << "\n";
	std::cout << "c is " << c.toInt() << " as integer" << "\n";
	std::cout << "d is " << d.toInt() << " as integer\n" << std::endl;

	return 0;
}
