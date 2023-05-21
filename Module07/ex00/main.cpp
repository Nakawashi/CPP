/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:20:36 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/21 15:25:40 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"
#include "Awesome.hpp"

// MY OWN MAIN
// int	main(void)
// {
// 	int		n1 = 100;
// 	int		n2 = 36;
// 	float	f1 = 15.4f;
// 	float	f2 = 5.1f;


// 	std::cout	<< "\n\033[0;33mswap test :\n"  << "\033[0m"
// 				<< "first value\t: " << n1 << "\n"
// 				<< "second value\t: " << n2
// 				<< std::endl;

// 	std::cout << "<<< SWAP >>>" << std::endl;
// 	swap(n1, n2);

// 	std::cout	<< "first value\t: " << n1 << "\n"
// 				<< "second value\t: " << n2
// 				<< std::endl;

// 	// ------------------------------------------------------------

// 	std::cout	<< "\n\033[0;33mswap test :\n"  << "\033[0m"
// 				<< "first value\t: " << f1 << "\n"
// 				<< "second value\t: " << f2
// 				<< std::endl;

// 	std::cout << "<<< SWAP >>>" << std::endl;
// 	swap(f1, f2);

// 	std::cout	<< "first value\t: " << f1 << "\n"
// 				<< "second value\t: " << f2 << "\n"
// 				<< std::endl;

// 	// ------------------------------------------------------------
// 	// ------------------------------------------------------------

// 	std::cout	<< "\n\033[0;33mmin test :\n"  << "\033[0m"
// 				<< "first value\t: " << f1 << "\n"
// 				<< "second value\t: " << f2
// 				<< std::endl;

// 	std::cout << "<<< MIN >>>" << std::endl;
// 	std::cout	<< min(f1, f2) << std::endl;

// 	// ------------------------------------------------------------
// 	// ------------------------------------------------------------

// 	std::cout	<< "\n\n\033[0;33mmax test :\n"  << "\033[0m"
// 				<< "first value\t: " << n1 << "\n"
// 				<< "second value\t: " << n2
// 				<< std::endl;

// 	std::cout << "<<< MAX >>>" << std::endl;
// 	std::cout	<< max(n1, n2) << std::endl;

// 	return 0;
// }


// SUBJECT MAIN
// int main( void )
// {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }

// EVAL MAIN
int main(void)
{
	Awesome a(2), b(4);
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;
	return (0);
}
