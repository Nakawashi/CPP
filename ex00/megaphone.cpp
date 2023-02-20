/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:57:36 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/20 21:37:10 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
/* 	for (int i = 0; i < argc; i++)
	{
		char* p = argv[i];
		while (*p)
		{
			*p = std::toupper(*p);
			p++;
		}
		std::cout << argv[i] << std::endl;
	} */

	char	buff[512];

	std::cout << "Hello World" << std::endl;
	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;
	return (0);
}
