/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:58:30 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/27 17:30:37 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
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
			phonebook.addContact();
		else if (command == "SEARCH")
		{
			for (int i = 0; i < MAX_CONTACTS; i++)
			{
				phonebook.contacts[i].showContact(i);
			}
			std::cout << "vous avez choisi SEARCH" << std::endl;
		}
		// 	displayPhonebook();
			// afficher l'annuaire
			// demander quel contact afficher
		else if (command == "EXIT" || command == "exit")
			ret = false;
	} while (ret);
	return 0;
}
