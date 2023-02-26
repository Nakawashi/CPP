/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:01:00 by lgenevey          #+#    #+#             */
/*   Updated: 2023/02/26 14:05:52 by lgenevey         ###   ########.fr       */
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
	void	displayContacts(void);

private:
	static std::string fields[5];
	std::string fieldsInput[5];

};

#endif

//set les informations recues cin
//
