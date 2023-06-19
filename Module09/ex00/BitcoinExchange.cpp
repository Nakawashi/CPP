/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:22:05 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/19 18:18:52 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
	struct tm : store YY, MM, DD
	function mktime : check if tm values are valids. Returns -1 if not

*/

BitcoinExchange::BitcoinExchange(std::ifstream& infile)
{
	std::tm		time = {};
	int			year, month, day;
	time_t		rawtime;
	char		c;
	float		value;
	std::string	line;

	std::getline(infile, line); // skip first line, the header meta data
	while (std::getline(infile, line))
	{
		std::istringstream	stream(line);
		stream >> year >> c >> month >> c >> day >> c >> value;
		time.tm_year = year;
		time.tm_mon = month - 1; // [0-11]
		time.tm_mday = day;
		rawtime = mktime(&time);
		if (rawtime != -1)
			_database[rawtime] = value;
		else
		{
			std::cout	<< RED
			<< "Error : invalid date"
			<< NONE
			<< std::endl;
		}
	}

	infile.close();
}

BitcoinExchange::~BitcoinExchange(void) {}

void	BitcoinExchange::printDatabase(void) const
{
	std::map<std::time_t, float>::const_iterator it;

	for (it = _database.begin(); it != _database.end(); ++it)
	{
		std::cout	<< it->first
					<< ':'
					<< it->second
					<< std::endl;
	}
}
