/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:56:04 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/20 20:21:39 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

// only digits
// only positives
// no doublons

bool	argValidation(std::string input)
{
	// std::cout << "input : " << input << std::endl;
	std::string::const_iterator it;
	for (it = input.begin(); it != input.end(); ++it)
	{
		char c = *it;
		if (isdigit(c))
			std::cout << "c : [" << input << "]" << std::endl;
		// else if (input.compare(input) == 0)
	}
	return true;
}
