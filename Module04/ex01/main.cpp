/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:40:56 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/16 21:18:15 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal* tab_animals[6];

	// init the array with cats and dogs
	for (int i = 0; i < 3; i++)
	{
		tab_animals[i] = new Cat();
	}
	for (int i = 3; i < 6; i++)
	{
		tab_animals[i] = new Dog();
	}

	std::cout << tab_animals[0]->getType() << std::endl;
	tab_animals[0]->setType("Bengal");
	std::cout << tab_animals[0]->getType() << std::endl;

	std::cout << tab_animals[1]->getType() << std::endl;
	delete tab_animals[1];
	tab_animals[1] = tab_animals[0]->clone();
	std::cout << tab_animals[1]->getType() << std::endl;

	std::cout << tab_animals[5]->getType() << std::endl;
	tab_animals[5]->setType("Labrador");
	std::cout << tab_animals[5]->getType() << std::endl;
	// tab_animals[0] = tab_animals[1];

	// free memory of each pointers
	for (int i = 0; i < 6; i++)
	{
		delete tab_animals[i];
	}
	return 0;
}
