/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:51:42 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/21 19:28:54 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
: AMateria("ice")
{
	std::cout << "[Ice] default constructor called" << std::endl;
}

Ice::Ice(const Ice& src)
: AMateria(src)
{
	std::cout << "[Ice] copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice(void)
{
	std::cout << "[Ice] destructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
		this->AMateria::operator=(rhs);
	return *this;
}

Ice*	Ice::clone(void) const
{
	return new Ice();
}
