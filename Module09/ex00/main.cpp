/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:25:17 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/24 15:24:56 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	std::ifstream	database("data.csv");
	std::ifstream	inputFile(argv[1]);
	bool			isOpen = inputFile.is_open();

	if (argc != 2 || !isOpen)
	{
		std::cout	<< RED
					<< "Error : invalid number of arguments:\n"
					<< "Second argument should be an existing file"
					<< NONE
					<< std::endl;
		return 1;
	}

	BitcoinExchange	test(database);
	test.processInput(inputFile);

	return 0;
}
