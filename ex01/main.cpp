/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:58:30 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/28 17:22:23 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	std::string	command;
	Phonebook	phonebook;
	char		contactIndexChar;
	bool		ret = true;
	do
	{
		phonebook.displayPrompt();
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
		{
			phonebook.showPhonebook();
			std::cout << "Which contact would you display ? [1 - 10]" << std::endl;
			std::cin >> contactIndexChar;
			while ((int)contactIndexChar < 0 && (int)contactIndexChar > 10)
			{
				std::cout << "\033[0;31mUnknown index. Which contact would you display ? [1 - 10]\033[0m" << std::endl;
				std::cin >> contactIndexChar;
			}
			phonebook.contacts->showContact((int)contactIndexChar);
			printf("C'est bon!\n");
		}
		// 	displayPhonebook();
			// afficher l'annuaire
			// demander quel contact afficher
		else if (command == "EXIT" || command == "exit")
			ret = false;
	} while (ret);
	return 0;
}
