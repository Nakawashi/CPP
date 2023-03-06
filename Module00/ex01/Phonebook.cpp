/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:42:35 by lgenevey          #+#    #+#             */
/*   Updated: 2023/03/06 19:12:23 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) : _index(0)
{
	// std::cout << "Phonebook Constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	// std::cout << "Phonebook Destructor called" << std::endl;
	return ;
}

void	Phonebook::displayPrompt(void) const
{
		std::cout << "\n";
		std::cout << VIOLET <<" ------------------------------------------------\n";
		std::cout << " | Please enter one of these following command:	|\n";
		std::cout << " |                                              |\n";
		std::cout << " | ADD		: Add a new contact		|\n";
		std::cout << " | SEARCH	: Display and search a contact	|\n";
		std::cout << " | EXIT		: Exit the programm		|\n";
		std::cout << " ------------------------------------------------\n" << NONE << std::endl;
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

void	Phonebook::searchContact(Phonebook phonebook)
{
	int			i = 0;
	std::string	str = "";

	phonebook._displayPhonebook(phonebook);
	if (phonebook.contacts[0].getFieldInput(0) == "")
	{
		std::cout << "\nPhonebook empty, please " << RED << "ADD" << NONE << " a first contact" << std::endl;
		return ;
	}
	std::cout << "\nWhich contact would you like to display ? [0 - 7]" << std::endl;
	std::getline(std::cin, str);
	if (str.empty() || _strIsDigit(str) == -1)
		std::cout << "\nPlease, "<< RED << "SEARCH" << NONE << " again" << std::endl;
	else
	{
		i = std::atoi(str.c_str()); // c_str() returns a pointer to the c-string representation of the string object's value.
		while (i < 0 || i >= phonebook._index)
		{
			std::cout << RED << "Invalid contact index : [0 - 7], pick an other one :" << NONE << std::endl;
			std::getline(std::cin, str);
			if (_strIsDigit(str) == 0)
				i = std::atoi(str.c_str());
		}
		if (phonebook.contacts[i].getFieldInput(0) != "")
			phonebook.contacts[i].showContact(i);
	}
}

/*
	if char is not a digit, returns -1
*/
int	Phonebook::_strIsDigit(std::string string)
{
	for (unsigned long i = 0; i < string.length(); i++)
	{
		if (!isdigit(string[i]))
			return (-1);
	}
	return (0);
}

/*
	if string has more than 10 chars : truncate it, returns 0 -> 9 char
*/
std::string	Phonebook::_truncate(std::string string)
{
	if (string.length() > 10)
	{
		return (string.substr(0, 9) + ".");
	}
	else
	{
		return (string);
	}
}


// https://stackoverflow.com/questions/19580877/how-to-truncate-a-string-formating-c
void	Phonebook::_displayPhonebook(Phonebook phonebook)
{
	int	i = 0;

	std::cout << std::endl;

	std::cout << VIOLET << " | " << NONE;
	std::cout << BOLDWHITE << std::setw(10) << "Index" << NONE;
	std::cout << VIOLET << " | " << NONE;
	std::cout << BOLDWHITE << std::setw(10) << "First Name" << NONE;
	std::cout << VIOLET << " | " << NONE;
	std::cout << BOLDWHITE << std::setw(10) << "Last Name" << NONE;
	std::cout << VIOLET << " | " << NONE;
	std::cout << BOLDWHITE << std::setw(10) << "Nickname" << NONE;
	std::cout << VIOLET << " | " << NONE;
	std::cout << std::endl;

	// tant qu'on depasse pas 8 et qu'on a des infos
	while (i < MAX_CONTACTS && !(phonebook.contacts[i].getFieldInput(0).empty()))
	{
		std::cout << VIOLET << " | " << NONE;
		std::cout << std::setw(10) << i;
		std::cout << VIOLET << " | " << NONE;
		for (int j = 0; j < 3; j++)
		{
			std::cout << std::setw(10) << _truncate(phonebook.contacts[i].getFieldInput(j));
			std::cout << VIOLET << " | " << NONE;
		}
		std::cout << std::endl;
		++i;
	}
}
