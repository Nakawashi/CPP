/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:04:01 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/29 23:46:17 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>			// std::cout
#include <vector>			// std::vector
#include "easyfind.hpp"

int	main(void)
{
	int	myints[] = {2, 5, 87, 453};
	std::vector<int> v(myints, myints + 4);
	std::vector<int>::iterator it;

	it = easyfind(v, 2);
	if (it != v.end())
		std::cout << "number found" << std::endl;
	else
		std::cout << "number not found" << std::endl;


	it = easyfind(v, 20);
	if (it != v.end())
		std::cout << "number found" << std::endl;
	else
		std::cout << "number not found" << std::endl;
	return 0;
}
