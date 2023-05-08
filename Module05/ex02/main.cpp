/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:23:31 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/08 12:35:19 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "\n************************" << std::endl;
	{
		Bureaucrat	b1("Michael Scott", 21);

		std::cout << b1 << std::endl;
		try
		{
			ShrubberyCreationForm shrubby;
			std::cout << shrubby << std::endl;
			b1.signForm(shrubby);
			shrubby.setTarget("balcon");
			b1.executeForm(shrubby);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n************************" << std::endl;

	{
		Bureaucrat	b1("Dwight Schrut", 30);

		std::cout << b1 << std::endl;
		try
		{
			RobotomyRequestForm	robot;
			std::cout << robot << std::endl;
			b1.signForm(robot);
			robot.setTarget("Terrace");
			b1.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << "\n************************" << std::endl;

	{
		Bureaucrat	b1("Pam Beesly", 1);

		std::cout << b1 << std::endl;
		try
		{
			PresidentialPardonForm	pres;
			std::cout << pres << std::endl;
			b1.signForm(pres);
			pres.setTarget("President");
			b1.executeForm(pres);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
