// g++ main.cpp Warlock.cpp -o exam

#include "Warlock.hpp"
#include <iostream>
// int	main(void)
// {
// 	Warlock jeanne = Warlock("Jeanne", "Queen of the queens");
// 	jeanne.introduce();
// 	return 0;
// }

int main()
{
	Warlock const richard("Richard", "Mistress of Magma");
	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	Warlock* jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	delete jack;

	return (0);
}