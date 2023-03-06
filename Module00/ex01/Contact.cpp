/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:18:39 by lgenevey          #+#    #+#             */
/*   Updated: 2023/03/06 19:05:43 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <unistd.h>

Contact::Contact(void)
{
	fieldsInput[0] = "";
	fieldsInput[1] = "";
	fieldsInput[2] = "";
	fieldsInput[3] = "";
	fieldsInput[4] = "";
	// std::cout << "Contact Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Contact Destructor called" << std::endl;
	return ;
}

std::string Contact::labels[5] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
};

std::string	Contact::getFieldInput(int i)
{
	return this->fieldsInput[i];
}

// fill contact labels with what we get from std::cin
void	Contact::setContact(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter contact : " << labels[i] << std::endl;
		std::getline(std::cin, this->fieldsInput[i]);
		while (this->fieldsInput[i].empty())
		{
			std::cout << "Enter a contact, "<< RED << "PLEASE : "<< NONE << labels[i] << std::endl;
			std::getline(std::cin, this->fieldsInput[i]);
		}
	}
}

void	Contact::showContact(int i) const
{
	std::cout << std::endl;
	std::cout << "Contact No : " << i << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << labels[i] << " : " << fieldsInput[i] << std::endl;
	}
}
