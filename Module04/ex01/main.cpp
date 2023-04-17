/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:40:56 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/17 17:13:05 by lgenevey         ###   ########.fr       */
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

int	main(void)
{
	std::cout << "\n------------  start heap tests  ------------" << std::endl;
	// heap
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	delete dog; //should not create a leak
	delete cat;
	std::cout << "------------  end heap tests  ------------\n" << std::endl;


	std::cout << "\n------------  start stack tests  ------------" << std::endl;
	// stack
	Cat decibel;
	Cat bruyant(decibel);
	std::cout << "------------  end stack tests  ------------\n" << std::endl;

	std::cout << "\n------------  start assign tests  ------------" << std::endl;
	Dog parent;
	std::cout << "parent : " << parent.getBrain() << std::endl;
	{
		Dog tmp = parent;
		std::cout << "tmp : " << tmp.getBrain() << std::endl;
	}
	std::cout << "------------  end assign tests  ------------\n" << std::endl;

	return 0;
}
