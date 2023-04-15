#include "Animal.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	animal;
	Cat		cat("chat");

	std::cout << animal << std::endl;
	std::cout << cat << std::endl;

	return 0;
}
