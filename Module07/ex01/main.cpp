/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:53:57 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/21 17:30:09 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awesome.hpp"

#define SIZE 5

template<typename T>
void	super_print(const T& input)
{
	std::cout << input << std::endl;
}

//MY OWN MAIN
int	main(void)
{
	int		intArray[SIZE] = {0, 150, -28, 42, 74};
	float	fltArray[SIZE] = {35.2f, 10.5f, -88.25f, 5.5f, 42.42f};
	Awesome tab2[5];

	std::cout << "test 1 INT :" << std::endl;
	iter(intArray, SIZE, super_print<int>);
	std::cout << "\ntest 2 FLOAT : " << std::endl;
	iter(fltArray, SIZE, super_print<float>);
	std::cout << "\ntest 3 CLASS: " << std::endl;
	iter(tab2, SIZE, super_print<Awesome>);

	return 0;
}

// EVAL MAIN
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];
// 	iter( tab, 5, super_print );
// 	iter( tab2, 5, print );
// 	return 0;
// }
