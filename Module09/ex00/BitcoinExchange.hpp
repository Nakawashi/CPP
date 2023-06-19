/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:22:01 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/19 14:18:58 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <iostream>

class BitcoinExchange
{
public:
	BitcoinExchange(void);
	~BitcoinExchange(void);

	void							printDatabase(void) const;
	std::map<std::string, float>	getDatabase(void) const;

private:
	// BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange& src);
	BitcoinExchange&	operator=(const BitcoinExchange& rhs);

	std::map<std::string, float>	_database;
};

#endif
