/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:58:30 by lgenevey          #+#    #+#             */
/*   Updated: 2023/03/13 17:35:41 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>


/*
	Par défaut, clear() réinitialise les indicateurs d'état
		goodbit
		eofbit
		failbit
	de l'objet.
	Cela signifie que la méthode remet l'objet dans un état valide, prêt à être réutilisé.
*/
int	main(void)
{
	std::string	command;
	Phonebook	phonebook;
	bool		ret = true;

	do
	{
		phonebook.displayPrompt();
		std::getline(std::cin, command);
		if (!std::cin.good())
		{
			std::cout << "Error: bad input" << std::endl;
			std::cin.clear();
			clearerr(stdin);
			continue ;
		}
		if (command == "EXIT" || command == "exit")
			ret = false;
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		std::cin.clear();
	} while (ret);
	return 0;
}
