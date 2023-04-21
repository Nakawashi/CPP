#include "Cure.hpp"
#include "Ice.hpp"

int	main(void)
{
	AMateria*	cure = new Cure();
	AMateria*	ice1 = new Ice();

	std::cout << cure->getType() << std::endl;
	std::cout << ice1->getType() << std::endl;

	ice1->setType("beton");
	AMateria*	ice2 = ice1->clone();

	std::cout << ice2->getType() << std::endl;

	delete cure;
	delete ice1;
	delete ice2;

	return 0;
}
