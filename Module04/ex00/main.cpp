/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:40:56 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/16 21:21:00 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* cat2 = new Cat("chaton");

	std::cout << "\n" << dog->getType() << std::endl;
	std::cout << "\n" << cat->getType() << std::endl;
	std::cout << "\n" << cat2->getType() << std::endl;

	cat->makeSound(); //will output the cat sound!
	cat2->makeSound();
	dog->makeSound();
	meta->makeSound();

	delete cat;
	cat2 = cat->clone();
	std::cout << "\n" << cat2->getType() << "\n" << std::endl;


	delete meta;
	delete dog;
	delete cat;
	delete cat2;

	return 0;
}

// -----------------------------------------------------------------------------

// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"

// int main()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* cat = new WrongCat();
// 	std::cout << "\n" << cat->getType() << std::endl;
// 	cat->makeSound(); //will output the WrongCat sound!
// 	meta->makeSound();
// 	//...
// 	delete meta;
// 	delete cat;
// 	return 0;
// }
