/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:51:24 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/28 17:31:56 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS 8

class Phonebook {
public:

	Phonebook(void);	// constructeur
	~Phonebook(void);	// destructeur

	Contact	contacts[MAX_CONTACTS];
	void	displayPrompt(void) const;
	void	addContact(void);
	void	searchContact(int i) const;
	void	showPhonebook(void) const;

};

#endif