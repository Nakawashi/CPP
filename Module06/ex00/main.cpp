/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:43:25 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/16 21:16:45 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define YELLOW( w ) << "\033[0;33m" << w << "\033[0m"
#define YELLOW	"\033[0;33m"
#define NONE	"\033[0m"

#include "ScalarConversion.hpp"

// max signed integer 2147483647

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string			user_input = argv[1];
		ScalarConversion	sc(user_input);

		try
		{
			sc.storeInputType();
			std::cout << YELLOW << "type\t: " << sc.getType() << NONE << std::endl;
			sc.doConversion();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
