/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:42:28 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/21 18:42:31 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			std::string str(argv[i]);
			for (unsigned long j = 0; j < str.length(); ++j)
			{
				str[j] = std::toupper(str[j]);
			}
			std::cout << str;
		}
		std::cout << std::endl;
	}
	return (0);
}
