/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:23:31 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/02 14:00:08 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	{
		Bureaucrat	b1("Michael Scott", 21);

		std::cout << b1 << std::endl;
		try
		{
			//std::cout << f1 << std::endl;
			//b1.signForm(f1);
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
			//std::cout << f2 << std::endl;
			//b2.signForm(f2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
