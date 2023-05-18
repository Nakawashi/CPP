/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:21:04 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/18 17:42:19 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# include "Base.hpp"

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);		// Creates and return a pointer on instance of A, B or C randomly
void	identify(Base* p);	// Display the real type of the instance in parameter (pointer)
void	identify(Base& p);	// Display the real type of the instance in parameter (reference)

Base*	generate(void)
{
	// Explicit cast needed because of the lost of precision. time() returns a t_time witch is a long, larger than unsigned int.
	srand(static_cast<unsigned int>(time(0)));
	int	random = rand() % 3;
	std::cout << random << std::endl;

	switch (random)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return nullptr;
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "Type : A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "Type : B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "Type : C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		p = dynamic_cast<A&>(p);
		std::cout << "Type : A" << std::endl;
		return ;
	}
	catch(...) { }

	try
	{
		p = dynamic_cast<B&>(p);
		std::cout << "Type : B" << std::endl;
		return ;
	}
	catch(...) { }

	try
	{
		p = dynamic_cast<C&>(p);
		std::cout << "Type : C" << std::endl;
		return ;
	}
	catch(...) { }

	std::cerr << "Can not identify the type" << std::endl;
}

int	main(void)
{
	Base* test = generate();

	identify(test);
	identify(*test);

	delete test;
	return 0;
}
