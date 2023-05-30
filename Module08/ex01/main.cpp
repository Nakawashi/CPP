/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:21:48 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/30 23:27:47 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span v(5);
	v.addNumber(6);
	//v.longestSpan(); // catch exception bc only one element
	v.addNumber(3);
	v.addNumber(17);
	v.addNumber(9);
	v.addNumber(11);
	//v.addNumber(); // uncomment to catch the SpanFullException
	v.printVector();

	std::cout << "min diff : " << v.shortestSpan() << std::endl;
	std::cout << "max diff : " << v.longestSpan() << std::endl;

	return 0;
}
