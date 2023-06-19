/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:22:05 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/19 14:32:15 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::ifstream infile)
{
	// _database["bonjour"] = 10;
	// _database["guten tag"] = 20;
	// _database["hola"] = 30;
	// _database["ohio"] = 40;

	std::string	row;
	float		value;
	while (infile >> row >> value)
	{
		_database[row] = value;
	}
	infile.close();
}

BitcoinExchange::~BitcoinExchange(void) {}

void	BitcoinExchange::printDatabase(void) const
{
	std::map<std::string, float>::const_iterator it;

	for (it = _database.begin(); it != _database.end(); ++it)
	{
		std::cout	<< it->first
					<< ':'
					<< it->second
					<< std::endl;
	}
}
