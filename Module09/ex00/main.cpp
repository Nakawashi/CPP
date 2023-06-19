/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:25:17 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/19 19:26:51 by lgenevey         ###   ########.fr       */
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
		fonctions membre : find date avec lower_bound and returns value * exchange.
			if no exact date found :
				l'iterateur retourne par lower_bound -- sinon il retourne le suivant


//stringstream
//mktime
//t_time
//map::lower_bound
*/

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
	//test.printDatabase();
	test.processInput(inputFile);

	return 0;
}
