/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:23:31 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/25 17:36:41 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		// Bureaucrat a("tropHaut", 0); // uncomment to test throw at initialisation
		// Bureaucrat b("tropBas", 151);
		Bureaucrat c("Bernarda", 1);
		Bureaucrat d("Bernardo", 150);

		std::cout << "------------ start display ------------" << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		std::cout << "------------ end display ------------" << std::endl;

		std::cout << std::endl;

		std::cout << "------------ start display ------------" << std::endl;
		std::cout << "Augmentation du niveau de grade de " << c.getName() << std::endl;
		c.incrementGrade();
		std::cout << c.getGrade() << std::endl;
		// std::cout << "Baisse du niveau de grade de " << d.getName() << std::endl;
		// d.decrementGrade();
		std::cout << "------------ end display ------------" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
