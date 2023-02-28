/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:01:00 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/28 17:30:04 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {

public:
	Contact(void);
	~Contact(void);
	void	setContact();
	void	showContact(int i) const;

	std::string			fieldsInput[5];
	static std::string	labels[5]; //sera instantié une seule fois pour tous les objets. Pas de sens d'init dans le constructeur, c'est contradictoire.
};

#endif
