/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:22:01 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/20 16:18:35 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <iostream>	/* std::cin, std::cout */
# include <fstream>		/* std::ifstream */
# include <sstream>		/* std::stringstream */
# include <ctime>		/* time_t, struct tm, time, mktime */
#include "colors.hpp"

class BitcoinExchange
{
public:
	BitcoinExchange(std::ifstream& infile);
	~BitcoinExchange(void);

	void	printDatabase(void) const;
	void	processInput(std::ifstream& infile);

private:
	BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange& src);
	BitcoinExchange&	operator=(const BitcoinExchange& rhs);
	float				_findDate(std::tm time);

	std::map<std::time_t, float>	_database;
};

#endif
