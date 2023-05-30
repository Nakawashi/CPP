/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:21:48 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/30 17:58:14 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span v(5);
	v.addNumber();

	//v.longestSpan(); // catch exception bc only one element

	v.addNumber();
	v.addNumber();
	v.addNumber();
	v.addNumber();
	//v.addNumber(); // uncomment to catch the exception
	v.printVector();

	std::cout << "min diff : " << v.shortestSpan() << std::endl;
	std::cout << "max diff : " << v.longestSpan() << std::endl;

	return 0;
}
