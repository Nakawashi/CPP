/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:21:48 by nakawashi         #+#    #+#             */
/*   Updated: 2023/06/03 19:09:09 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

int	main(void)
{
/*	{
 		Span v(5);
		try
		{
			v.addNumber(6);
			v.longestSpan(); // catch exception bc only one element
			v.addNumber(3);
			v.addNumber(17);
			v.addNumber(9);
			v.addNumber(11);
			//v.addNumber(); // uncomment to catch the SpanFullException
			v.printVector();
			std::cout << "min diff : " << v.shortestSpan() << std::endl;
			std::cout << "max diff : " << v.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error : " << e.what() << "\n";
		}
	}*/

/* 	{
		Span v(10);
		try
		{
			v.addNumber(666);
			v.addNumber(666);
			v.addNumber(666);
			v.addNumber(666);
			v.addRandomNumbers();
			v.printVector();
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error : " << e.what() << '\n';
		}
	} */

	{
		try
		{
			Span v(3);

			v.addNumberIter(v.getStockage().begin(), v.getStockage().begin() + 2);
			//v.addNumber(100);
			v.printVector();
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error : " << e.what() << '\n';
		}

	}

	return 0;
}
