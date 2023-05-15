/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:43:25 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/15 18:09:08 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			std::cout << "\033[0;33mtype\t: " << sc.getType() << "\033[0m" << std::endl;
			sc.doConversion();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
