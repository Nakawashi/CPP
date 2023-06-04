/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:21:48 by nakawashi         #+#    #+#             */
/*   Updated: 2023/06/04 13:21:44 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

int	main(void)
{
	std::cout << "\nBASIC TEST\n" << std::endl;

	{
 		Span v(5);
		try
		{
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
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error : " << e.what() << "\n";
		}
	}

	std::cout << "\nFILL WITH RANDOM TEST\n" << std::endl;

	{
		Span v(10);
		try
		{
			v.addNumber(666);
			v.addNumber(666);
			v.addNumber(666);
			v.addNumber(666);
			v.addRandomNumbers();
			v.printVector();
			std::cout << "min diff : " << v.shortestSpan() << std::endl;
			std::cout << "max diff : " << v.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error : " << e.what() << '\n';
		}
	}

	std::cout << "\nLIMIT TEST\n" << std::endl;

	{
		try
		{
			std::vector<int> v;
			Span span(3);

			v.push_back(1);
			v.push_back(2);
			v.push_back(4);
			//v.push_back(16); // generate exception

			span.addNumberIter(v.begin(), v.end());
			span.printVector();
			std::cout << "min diff : " << span.shortestSpan() << std::endl;
			std::cout << "max diff : " << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error : " << e.what() << '\n';
		}
	}

	return 0;
}
