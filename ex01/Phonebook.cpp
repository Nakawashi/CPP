/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:42:35 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/26 16:59:30 by lgenevey         ###   ########.fr       */
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

// void	Phonebook::init_array(void)
// {
// 	for (int i = 0; i < MAX_CONTACTS; i++)
// 	{
// 		this->contacts[i] = std::string
// 	}
// }

void	Phonebook::addContact(void)
{
	this->contacts[0].setContact();
}
