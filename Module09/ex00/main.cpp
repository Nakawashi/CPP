/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:25:17 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/19 14:19:46 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	1. verifier l'input :
		le second doit etre un fichier
		le fichier doit exister et pouvoir etre ouvert voir module01
	2. Si ok, stocker les valeurs dans deux variables
		dateValidation (YY-MM-DD)
		valueValidation (float or integer)
	3. Creer un objet de classe BitcoinExchange
		constructeur : initialise map avec mon fichier de datas pour laisser la possibilite d'avoir d'autres données
		fonctions membre : find date and returns value * exchange.
			if no exact date found :
				private member function which will get the previous date and return its value * exchange with a message


//stringstream
//mktime
//t_time


*/

#include <fstream>
#include "BitcoinExchange.hpp"
#include "colors.hpp"

int	main(int argc, char **argv)
{
	std::ifstream	ifs(argv[1]);
	bool			isOpen = ifs.is_open();
	if (argc != 2 || !isOpen)
	{
		std::cout	<< RED
					<< "Error : invalid number of arguments:\n"
					<< "Second argument should be an existing file"
					<< NONE
					<< std::endl;
		return 1;
	}
	// BitcoinExchange	test;
	// test.printDatabase();
	return 0;
}
