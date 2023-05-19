/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:20:36 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/19 20:49:21 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int	main(void)
{
	int		n1 = 100;
	int		n2 = 36;
	float	f1 = 15.4f;
	float	f2 = 5.1f;


	std::cout	<< "\n\033[0;33mswap test :\n"  << "\033[0m"
				<< "first value\t: " << n1 << "\n"
				<< "second value\t: " << n2
				<< std::endl;

	std::cout << "<<< SWAP >>>" << std::endl;
	swap(n1, n2);

	std::cout	<< "first value\t: " << n1 << "\n"
				<< "second value\t: " << n2
				<< std::endl;

	// ------------------------------------------------------------

	std::cout	<< "\n\033[0;33mswap test :\n"  << "\033[0m"
				<< "first value\t: " << f1 << "\n"
				<< "second value\t: " << f2
				<< std::endl;

	std::cout << "<<< SWAP >>>" << std::endl;
	swap(f1, f2);

	std::cout	<< "first value\t: " << f1 << "\n"
				<< "second value\t: " << f2 << "\n"
				<< std::endl;

	// ------------------------------------------------------------
	// ------------------------------------------------------------

	std::cout	<< "\n\033[0;33mmin test :\n"  << "\033[0m"
				<< "first value\t: " << f1 << "\n"
				<< "second value\t: " << f2
				<< std::endl;

	std::cout << "<<< MIN >>>" << std::endl;
	std::cout	<< min(f1, f2) << std::endl;

	// ------------------------------------------------------------
	// ------------------------------------------------------------

	std::cout	<< "\n\n\033[0;33mmax test :\n"  << "\033[0m"
				<< "first value\t: " << n1 << "\n"
				<< "second value\t: " << n2
				<< std::endl;

	std::cout << "<<< MAX >>>" << std::endl;
	std::cout	<< max(n1, n2) << std::endl;

	return 0;
}