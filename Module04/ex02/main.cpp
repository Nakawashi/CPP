/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:40:56 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/17 18:13:49 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

//------------------------------------------------------------------------------

int	main(void)
{
	std::cout << "\n------------  start heap tests  ------------" << std::endl;
	// heap
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	// const AAnimal* animal = new AAnimal();
	// AAnimal test;

	delete dog;
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
