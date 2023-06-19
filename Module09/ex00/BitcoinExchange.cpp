/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:22:05 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/19 21:18:35 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
	struct tm : store YY, MM, DD
	function mktime : check if tm values are valids. Returns -1 if not
*/

BitcoinExchange::BitcoinExchange(std::ifstream& infile)
{
	std::string	line;
	std::tm		time = {};
	int			year, month, day;
	time_t		rawtime;
	char		c;
	float		value;

	std::getline(infile, line); // skip first line, the header meta data
	while (std::getline(infile, line))
	{
		std::istringstream	stream(line);
		stream >> year >> c >> month >> c >> day >> c >> value;
		time.tm_year = year - 1900;
		time.tm_mon = month - 1; // [0-11]
		time.tm_mday = day;
		rawtime = mktime(&time);
		_database[rawtime] = value;
	}
	infile.close();
}

BitcoinExchange::~BitcoinExchange(void) {}


void	BitcoinExchange::printDatabase(void) const
{
	std::map<std::time_t, float>::const_iterator it;

	std::cout << "print the map : " << std::endl;
	for (it = _database.begin(); it != _database.end(); ++it)
	{
		std::cout	<< it->first
					<< " : "
					<< it->second
					<< std::endl;
	}
}

void	BitcoinExchange::processInput(std::ifstream& infile)
{
	std::string	line;
	std::tm		time = {};
	char		c;
	float		value;

	std::getline(infile, line); // skip first line, the header meta data
	while (std::getline(infile, line))
	{
		std::istringstream	stream(line);
		stream	>> time.tm_year
				>> c
				>> time.tm_mon
				>> c
				>> time.tm_mday
				>> c
				>> value;
		time.tm_year -= 1900;
		time.tm_mon -= 1;
		// no value reset if blank, keeps previous value
		if (!value || c != '|')
			std::cout << "Error: bad input => " << line << std::endl;
		else if (value < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (value > 1000)
			std::cout << "Error: too large number." << std::endl;
		else if (mktime(&time) == -1)
			std::cout << "Error: bad input => " << line << std::endl;
		else
		{
			float	exchange = findDate(time);
			std::cout << line << " => " << value << " = " << value * exchange << std::endl;
		}
	}
}

float	BitcoinExchange::findDate(std::tm time)
{
	std::map<std::time_t, float>::const_iterator it;
	it = _database.lower_bound(mktime(&time));
	if (it->first == mktime(&time) || it == _database.begin()) // check old dates
		return it->second;
	--it;
	return it->second;
}

/*
	time_t -> tm localtime()
	tm -> string strftime()
*/
