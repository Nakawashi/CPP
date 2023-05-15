/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:43:25 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/15 16:31:27 by lgenevey         ###   ########.fr       */
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
			std::cout << "type : " << sc.getType() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
