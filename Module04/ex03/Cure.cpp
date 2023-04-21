/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:29:21 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/21 19:28:41 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
: AMateria("cure")
{
	std::cout << "[Cure] default constructor called" << std::endl;
}

Cure::Cure(const Cure& src)
: AMateria(src)
{
	std::cout << "[Cure] copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure(void)
{
	std::cout << "[Cure] destructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& rhs)
{
	if (this != &rhs)
		this->AMateria::operator=(rhs);
	return *this;
}

Cure*	Cure::clone(void) const
{
	return new Cure();
}
