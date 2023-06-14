/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:53:53 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/14 14:53:57 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"
# define VIOLET		"\033[0;36m"
# define NONE		"\033[0m"
# define BOLDWHITE	"\033[1m\033[37m"

#include "RPN.hpp"
#include <regex>


bool	countValues(std::string expression);

// template<typename T>
// void	displayVector(const std::vector<T>& vector)
// {
// 	typename std::vector<T>::const_iterator	it;
// 	for (it = vector.begin(); it != vector.end(); ++it)
// 	{
// 		std::cout << *it << std::endl;
// 	}
// }

int	main(int argc, char** argv)
{
	if (argc == 1)
	{
		std::cout
			<< RED
			<< "Error : Invalid number of arguments"
			<< NONE
			<< std::endl;
		return 1;
	}

	// MANAGE ONE OR MANY ARGUMENTS
	std::string	av(argv[1]);
	int	i = 2;
	while (argv[i])
	{
		av += ' ';
		av += argv[i];
		++i;
	}

	// MANAGE VALIDITY OF GIVEN EXPRESSION
	std::regex	regRule("[0-9] [0-9]( [0-9\\+\\-\\*\\/])*"); // warning with multiple argv : echap *
	if (!std::regex_match(av, regRule) || !countValues(av))
	{
		std::cout
		<< RED
		<< "Error : Invalid sequence of expression. \n"
		<< "Rules :\n"
		<< "- Only digits [0-9] and following math operators [+-*/] \n"
		<< "- Starts with two digits \n"
		<< "- Separated with spaces \n"
		<< "- Correct amount of operators depending on nb of operands"
		<< NONE
		<< std::endl;
		return 1;
	}
	//RPN	rpnCalculator(av);
	//std::cout << rpnCalculator.getResult() << std::endl;

	return 0;
}

bool	countValues(std::string expression)
{
	int	i = 0;
	int	countOperands = 0;
	int	countOperators = 0;
	int	res = 0;
	while (expression[i])
	{
		if (isdigit(expression[i]))
			++countOperands;
		else if (expression[i] != ' ')
			++countOperators;
		++i;
	}
	res = countOperands - countOperators;
	if (res == 1)
		return true;
	return false;
}
