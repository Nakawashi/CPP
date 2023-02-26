/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:58:30 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/26 14:17:54 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	annuaire;
	std::string	command;
	bool		ret = true;

	while (ret)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
			annuaire.addContact();
		else if (command == "SEARCH")
			displayPhonebook();
			// afficher l'annuaire
			// demander quel contact afficher
		else if (command == "EXIT")
			ret = false;
	}
	return 0;
}
