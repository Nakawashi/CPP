/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:18:39 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/28 17:32:26 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <unistd.h>

Contact::Contact(void) {
	std::cout << "Contact Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void){
	std::cout << "Contact Destructor called" << std::endl;
	return ;
}

std::string Contact::labels[5] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
};

// fill contact labels with what we get from std::cin
void	Contact::setContact(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter contact : " << labels[i] << std::endl;
		std::getline(std::cin, this->fieldsInput[i]);
		// incrementer nb de contacts
		while (this->fieldsInput[i].empty())
		{
			std::cout << "Hey! Please enter contact : " << labels[i] << std::endl;
			std::getline(std::cin, this->fieldsInput[i]);
		}
	}
	// displayContacts(); // for tests
}

void	Contact::showContact(int i) const
{
	write(1, "u\n", 2);
	std::cout << this->fieldsInput[i] << std::endl;
	if (this->fieldsInput->size())
	{
		write(1, "dans le test\n", 14);
		return ;
	}
	std::cout << "Contact : " << i << std::endl;
	std::cout << labels[i] << " : " << fieldsInput[i] << std::endl;

}
