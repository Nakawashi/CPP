/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:04:01 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/29 23:52:46 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>			// std::cout
#include <vector>			// std::vector
#include <list>				// std::list
#include "easyfind.hpp"

int	main(void)
{
	std::cout << "\n>>> vector <<<\n" << std::endl;

	{
		int	myints[] = {2, 5, 87, 453};
		std::vector<int> v(myints, myints + 4);
		std::vector<int>::iterator it;

		it = easyfind(v, -2);
		if (it != v.end())
			std::cout << "number found" << std::endl;
		else
			std::cout << "number not found" << std::endl;


		it = easyfind(v, 453);
		if (it != v.end())
			std::cout << "number found" << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}

	std::cout << "\n>>> list <<<\n" << std::endl;

	{
		int	myints[] = {-75, 23, 42, 13};
		std::list<int> v(myints, myints + 4);
		std::list<int>::iterator it;

		it = easyfind(v, 22);
		if (it != v.end())
			std::cout << "number found" << std::endl;
		else
			std::cout << "number not found" << std::endl;


		it = easyfind(v, 42);
		if (it != v.end())
			std::cout << "number found" << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}

	return 0;
}
