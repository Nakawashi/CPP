/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:23:31 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/08 13:06:36 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	{
		Bureaucrat	b1("Pam Beesly", 30);
		Bureaucrat	b2("Jim Halpert", 1);
		Bureaucrat	b3("Holly Flax", 2);
		Intern		paul;

		try
		{
			std::cout << "\n************************\n" << std::endl;


			AForm*	shrubby = paul.makeForm("ShrubberyCreationForm", "Jardinet");
			std::cout << *shrubby << std::endl;
			b1.signForm(*shrubby);
			b1.executeForm(*shrubby);
			std::cout << *shrubby << std::endl;
			delete shrubby;

			std::cout << "\n************************\n" << std::endl;


			AForm*	robotomy = paul.makeForm("RobotomyRequestForm", "Robot");
			std::cout << *robotomy << std::endl;
			b2.signForm(*robotomy);
			b2.executeForm(*robotomy);
			std::cout << *robotomy << std::endl;
			delete robotomy;

			std::cout << "\n************************\n" << std::endl;

			AForm*	presidential = paul.makeForm("PresidentialPardonForm", "Michael");
			std::cout << *presidential << std::endl;
			b3.signForm(*presidential);
			b3.executeForm(*presidential);
			std::cout << *presidential << std::endl;
			delete presidential;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
