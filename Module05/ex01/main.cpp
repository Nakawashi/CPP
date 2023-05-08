/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:23:31 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/08 12:27:24 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
		Bureaucrat	b1("Pam Beesly", 15);

		std::cout << b1 << std::endl;
		try
		{
			Form	f1("f1", 20, 35);
			std::cout << f1 << std::endl;
			b1.signForm(f1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		Bureaucrat	b1("Michael Scott", 21);

		std::cout << b1 << std::endl;
		try
		{
			Form	f1("f1", 20, 35);
			std::cout << f1 << std::endl;
			b1.signForm(f1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		Bureaucrat	b2("Margaret Tatcher", 150);

		std::cout << b2 << std::endl;
		try
		{
			Form	f2("f2", 1, 250);
			std::cout << f2 << std::endl;
			b2.signForm(f2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
