/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:42:35 by lgenevey          #+#    #+#             */
/*   Updated: 2023/03/05 17:09:53 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) : _index(0)
{
	std::cout << "Phonebook Constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook Destructor called" << std::endl;
	return ;
}

void	Phonebook::displayPrompt(void) const
{
		std::cout << VIOLET <<" ------------------------------------------------\n";
		std::cout << " | Please enter one of these following command:	|\n";
		std::cout << " |                                              |\n";
		std::cout << " | ADD		: Add a new contact		|\n";
		std::cout << " | SEARCH	: Display and search a contact	|\n";
		std::cout << " | EXIT		: Exit the programm		|\n";
		std::cout << " ------------------------------------------------" << NONE << std::endl;
}

/*
	add a new contact in the Phonebook
	reset index to 0 if the user overflows the limit of max contacts
*/
void	Phonebook::addContact(void)
{
	if (this->_index >= MAX_CONTACTS)
		this->_index = 0;
	this->contacts[_index].setContact();
	this->_index += 1;
}

void	Phonebook::searchContact(Phonebook phonebook) const
{
	int			i = 0;
	std::string	str = "";

	phonebook._displayPhonebook();
	if (phonebook.contacts[0].fieldsInput[0].empty())
	{
		std::cout << "Phonebook empty, please " << RED << "ADD" << NONE << " a first contact" << std::endl;
		return ;
	}
	i = 0;
	std::cout << "Which contact would you like to display ? [0 - 7]" << std::endl;
	std::getline(std::cin, str);
	if (str.empty())
		std::cout << "Please "<< RED << "SEARCH" << NONE << " again" << std::endl;
	else
	{
		i = std::atoi(str.c_str()); // c_str() returns a pointer to the c-string representation of the string object's value.
		while (i < 0 || i >= MAX_CONTACTS)
		{
			std::cout << RED << "Invalid contact index : [0 - 7]" << NONE << std::endl;
			std::getline(std::cin, str);
			i = std::atoi(str.c_str());
		}
		phonebook.contacts[i].showContact(i);
	}


	// display contacts list 4 colonnes : index, first name, last name et nickname separes par un |
	// texte alligné sur la droite.
	// chaque colonne : 10 char de long. Si depasse : tronquer et 10e char est un point.
	// afficher un contact en particulier : gerer si entree non valide

}

void	Phonebook::_displayPhonebook(void) const
{
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::setw(10) << Contact::labels[i] << " |";
	}
	std::cout << std::endl;

	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << "| " << this->contacts[i].fieldsInput[i] << " ";
	// }
}

