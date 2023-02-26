/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:01:00 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/26 18:51:30 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {

private:
	static std::string fields[5];
	std::string fieldsInput[5];

public:
	Contact(void);
	~Contact(void);

	void	setContact();
	void	displayContacts(void) const;

};

#endif

//set les informations recues cin
//
