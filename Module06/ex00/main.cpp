/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:43:25 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/08 16:41:51 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string	user_input = argv[1];
		bool		all_digit = true;
		std::cout << user_input << std::endl;

		for (size_t i = 0; i < user_input.length(); i++)
		{
			if (!std::isdigit(user_input[i]))
			{
				all_digit = false;
				break ;
			}
		}

		if (all_digit)
			std::cout << "Il n'y a que des chiffres" << std::endl;
		else
			std::cout << "Il n'y a pas que des chiffres" << std::endl;
	}
	return 0;
}
