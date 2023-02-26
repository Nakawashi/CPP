/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:18:39 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/26 19:14:48 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
	std::cout << "Contact Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void){
	std::cout << "Contact Destructor called" << std::endl;
	return ;
}

std::string Contact::fields[5] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
};

// fill contact fields with what we get from std::cin
void	Contact::setContact(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter contact : " << fields[i] << std::endl;
		std::getline(std::cin, this->fieldsInput[i]);
		while (this->fieldsInput[i].empty())
		{
			std::cout << "Hey! Please enter contact : " << fields[i] << std::endl;
			std::getline(std::cin, this->fieldsInput[i]);
		}
	}
	displayContacts(); // for tests
}

void	Contact::displayContacts(void) const
{
	std::cout << "Contact 0: " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << fields[i] << " : " << fieldsInput[i] << std::endl;
	}
}
