/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:57:36 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/20 17:46:45 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	

int	main(int argc, char *argv)
{
	for (int i = 0; i < argc; i++)
	{
		char* p = argv[i];
		while (*p)
		{
			*p = std::toupper(*p);
			p++;
		}
		std::cout << argv[i] << std::endl;
	}
	return (0);
}