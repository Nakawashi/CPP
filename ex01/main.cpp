/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:58:30 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/26 18:46:38 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	annuaire;
	std::string	command;
	bool		ret = true;

	do
	{
		std::cout << "-------------------------------------------------" << std::endl;
		std::cout << "| Please enter one of these following command:	|" << std::endl;
		std::cout << "|                                              	|" << std::endl;
		std::cout << "| ADD		: Add a new contact		|" << std::endl;
		std::cout << "| SEARCH	: Display and search a contact	|" << std::endl;
		std::cout << "| EXIT		: Exit the programm		|" << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			annuaire.addContact();
		// else if (command == "SEARCH")
		// 	displayPhonebook();
			// afficher l'annuaire
			// demander quel contact afficher
		else if (command == "EXIT")
			ret = false;
	} while (ret);
	return 0;
}
