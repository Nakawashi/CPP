/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:58:30 by lgenevey          #+#    #+#             */
/*   Updated: 2023/03/10 13:03:53 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	std::string	command;
	Phonebook	phonebook;
	bool		ret = true;
	do
	{
		phonebook.displayPrompt();
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT" || command == "exit")
			ret = false;
	} while (ret);
	return 0;
}
