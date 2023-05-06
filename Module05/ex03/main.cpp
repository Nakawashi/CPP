/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:23:31 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/06 17:53:42 by nakawashi        ###   ########.fr       */
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
		Bureaucrat	b3("Holly Flax", 150);
		Intern		paul;
		AForm*		shrubby = new ShrubberyCreationForm("Jardinet");
		AForm*		robotomy = new RobotomyRequestForm("Robot");
		AForm*		presidential = new PresidentialPardonForm("Michael");

		try
		{
			paul.makeForm(shrubby->getName(), "Jardinet");
			std::cout << *shrubby << std::endl;
			b1.signForm(*shrubby);
			b1.executeForm(*shrubby);
			std::cout << *shrubby << std::endl;
			delete shrubby;

			paul.makeForm(presidential->getName(), "Robot");
			std::cout << *robotomy << std::endl;
			b2.signForm(*robotomy);
			b2.executeForm(*robotomy);
			delete robotomy;

			paul.makeForm(presidential->getName(), "Michael");
			std::cout << *robotomy << std::endl;
			b3.signForm(*robotomy);
			b3.executeForm(*robotomy);
			//delete presidential;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return 0;
}
