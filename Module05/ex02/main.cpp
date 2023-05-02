/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:23:31 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/02 17:47:38 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	{
		Bureaucrat	b1("Michael Scott", 21);

		std::cout << b1 << std::endl;
		try
		{
			ShrubberyCreationForm shrubby;
			std::cout << shrubby << std::endl;
			b1.signForm(shrubby);
			shrubby.execute(b1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		Bureaucrat	b1("Michael Scott", 150);

		std::cout << b1 << std::endl;
		try
		{
			ShrubberyCreationForm shrubby;
			b1.signForm(shrubby);
			shrubby.execute(b1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
