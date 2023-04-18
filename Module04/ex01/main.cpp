/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:40:56 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/18 12:47:24 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// int main(void)
// {
// 	Animal* tab_animals[6];

// 	// init the array with cats and dogs
// 	for (int i = 0; i < 3; i++)
// 	{
// 		tab_animals[i] = new Cat();
// 	}
// 	for (int i = 3; i < 6; i++)
// 	{
// 		tab_animals[i] = new Dog();
// 	}
// 	// make everybody talks and delete each objects
// 	for (int i = 0; i < 6; i++)
// 	{
// 		tab_animals[i]->makeSound();
// 		delete tab_animals[i];
// 	}
// 	return 0;
// }


//------------------------------------------------------------------------------


// int	main(void)
// {
// 	// heap
// 	std::cout << "\n------------  start subject tests  ------------" << std::endl;
// 	const Animal* animal = new Animal();
// 	const Animal* dog = new Dog();
// 	const Animal* cat = new Cat();
// 	std::cout << animal->getType() << std::endl;
// 	std::cout << dog->getType() << std::endl;
// 	std::cout << cat->getType() << std::endl;
// 	delete dog; //should not create a leak
// 	delete cat;
// 	delete animal;
// 	std::cout << "------------  end subject tests  ------------\n" << std::endl;

// 	return 0;
// }


//------------------------------------------------------------------------------


// int	main(void)
// {

// 	std::cout << "\n------------  start copy tests  ------------" << std::endl;
// 	// stack
// 	Cat chat1("decibel");
// 	Cat chat2("skylake");

// 	chat1.getBrain()->setIdea(0, "I am a cat");
// 	chat1.getBrain()->setIdea(1, "I like to be pretty");
// 	chat1.getBrain()->setIdea(2, "I like to scream");

// 	chat2.getBrain()->setIdea(0, "I am a kitty");
// 	chat2.getBrain()->setIdea(1, "I love tuna");
// 	chat2.getBrain()->setIdea(2, "I am cute");

// 	std::cout << "\nchat1 : \n";
// 	std::cout << chat1.getType() << "\n";
// 	chat1.getBrain()->printIdeas();

// 	std::cout << std::endl;

// 	std::cout << "\nchat2 : \n";
// 	std::cout << chat2.getType() << "\n";
// 	chat2.getBrain()->printIdeas();

// 	chat2 = chat1;

// 	std::cout << "\nchat2 : \n";
// 	std::cout << chat2.getType() << "\n";
// 	chat2.getBrain()->printIdeas();
// 	std::cout << "------------  end copy tests  ------------\n" << std::endl;

// 	return 0;
// }


//------------------------------------------------------------------------------

int	main(void)
{

	std::cout << "\n------------  start assign tests  ------------" << std::endl;
	Dog parent;

	parent.getBrain()->setIdea(0, "I am a dog");
	parent.getBrain()->setIdea(1, "Ayam veri klever");
	parent.getBrain()->setIdea(2, "vwouffe");

	std::cout << "parent : " << std::endl;
	parent.getBrain()->printIdeas();
	{

		Dog tmp;
		tmp.getBrain()->setIdea(0, "I am a dog too");
		tmp.getBrain()->setIdea(1, "wouuuf");
		tmp.getBrain()->setIdea(2, "lalala");
		std::cout << "tmp : " << std::endl;
		tmp.getBrain()->printIdeas();
		tmp = parent;
		std::cout << "tmp : " << std::endl;
		tmp.getBrain()->printIdeas();
	}
	std::cout << "------------  end assign tests  ------------\n" << std::endl;

	return 0;
}
