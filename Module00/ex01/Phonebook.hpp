/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:51:24 by lgenevey          #+#    #+#             */
/*   Updated: 2023/03/05 17:08:39 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip> // std::setw()
# include "Contact.hpp"

class Phonebook {


public:
	Phonebook(void);	// constructeur
	~Phonebook(void);	// destructeur

	Contact	contacts[MAX_CONTACTS];
	void	displayPrompt(void) const;
	void	addContact(void);
	void	searchContact(Phonebook phonebook) const;

private:
	int		_index;
	void	_displayPhonebook(void) const;

};

#endif
