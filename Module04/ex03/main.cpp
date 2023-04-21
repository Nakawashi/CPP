#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// int	main(void)
// {
// 	AMateria*	cure = new Cure();
// 	AMateria*	ice1 = new Ice();

// 	std::cout << cure->getType() << std::endl;
// 	std::cout << ice1->getType() << std::endl;

// 	ice1->setType("beton");
// 	AMateria*	ice2 = ice1->clone();

// 	std::cout << ice2->getType() << std::endl;

// 	delete cure;
// 	delete ice1;
// 	delete ice2;

// 	return 0;
// }


//----------------------------------------------

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}
