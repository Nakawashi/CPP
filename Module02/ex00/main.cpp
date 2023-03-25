#include "Fixed.hpp"

int	main(void)
{
	// MON TEST 1 : SUR LA HEAP
	// Fixed *number = new Fixed();

	// std::cout << "Test : " << number->getRawBits() << std::endl;
	// number->setRawBits(85);
	// std::cout << "Test : " << number->getRawBits() << std::endl;
	// delete number;


	// MON TEST 2 : TEST DE TOUTE LA CLASSE
	// Fixed number;
	// Fixed copy(number);

	// std::cout << "number : " << number.getRawBits() << std::endl;
	// std::cout << "copy : " << copy.getRawBits() << std::endl;
	// number.setRawBits(85);
	// std::cout << "number : " << number.getRawBits() << std::endl;
	// std::cout << "copy : " << copy.getRawBits() << std::endl;
	// copy.setRawBits(45);
	// std::cout << "number : " << number.getRawBits() << std::endl;
	// std::cout << "copy : " << copy.getRawBits() << std::endl;

	// copy = number;
	// std::cout << "number : " << number.getRawBits() << std::endl;
	// std::cout << "copy : " << copy.getRawBits() << std::endl;

	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;




	return 0;
}
