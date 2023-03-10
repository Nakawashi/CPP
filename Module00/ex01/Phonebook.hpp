/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:51:24 by lgenevey          #+#    #+#             */
/*   Updated: 2023/03/10 13:03:45 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip> // std::setw()
# include "Contact.hpp"

# define MAX_CONTACTS	8

class Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);

	Contact		contacts[MAX_CONTACTS];
	void		displayPrompt(void) const;
	void		addContact(void);
	void		searchContact(void);

private:
	int			_index;

	int			_strIsDigit(std::string string) const;
	void		_displayPhonebook(void);
	std::string	_truncate(std::string string);
};

#endif
