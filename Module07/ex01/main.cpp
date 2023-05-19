/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:53:57 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/19 23:55:37 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#define SIZE 5

template<typename T>
void	super_print(const T& input)
{
	std::cout << input << std::endl;
}


int	main(void)
{
	int		intArray[SIZE] = {0, 150, -28, 42, 74};
	float	fltArray[5] = {35.2f, 10.5f, -88.25f, 5.5f, 42.42f};

	std::cout << "test 1 :" << std::endl;
	iter(intArray, SIZE, super_print<int>);
	std::cout << "\ntest 2 : " << std::endl;
	iter(fltArray, SIZE, super_print<float>);

	return 0;
}
