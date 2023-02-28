/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:42:35 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/28 17:32:35 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
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
		std::cout << "-------------------------------------------------" << std::endl;
		std::cout << "| Please enter one of these following command:	|" << std::endl;
		std::cout << "|                                              	|" << std::endl;
		std::cout << "| ADD		: Add a new contact		|" << std::endl;
		std::cout << "| SEARCH	: Display and search a contact	|" << std::endl;
		std::cout << "| EXIT		: Exit the programm		|" << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
}

void	Phonebook::addContact(void)
{
	this->contacts[0].setContact();
}

void	Phonebook::showPhonebook(void) const
{
	std::cout << "First name | Last name | Nickname | Phone number | Darkest secret" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "| " << this->contacts[i].fieldsInput[i] << " " << std::endl;
	}
}

void	Phonebook::searchContact(int i) const
{
	if (this->contacts[i].fieldsInput[i] == "")
		return ;
	std::cout << i << std::endl;
}
