/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:57:36 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/21 15:16:52 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
 	for (int i = 0; i < argc; i++)
	{
		char *p = argv[i];
		while (*p)
		{
			*p = std::toupper(*p);
			p++;
		}
		std::cout << argv[i];
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
