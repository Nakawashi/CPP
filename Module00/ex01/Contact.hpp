/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:01:00 by lgenevey          #+#    #+#             */
/*   Updated: 2023/03/07 14:33:32 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

# define VIOLET			"\033[0;36m"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define BOLDWHITE		"\033[1m\033[37m"
# define NONE			"\033[0m"

class Contact
{
public:
	Contact(void);
	~Contact(void);
	void			setContact();
	void			showContact(int i) const;
	std::string		getFieldInput(int i);

private:
	std::string			fieldsInput[5];
	static std::string	labels[5]; //sera instantié une seule fois pour tous les objets. Pas de sens d'init dans le constructeur, c'est contradictoire.
};

#endif
