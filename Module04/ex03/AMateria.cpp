/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:27:49 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/21 22:52:32 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
	Coplien
*/

AMateria::AMateria(void)
: _type("aamateria")
{
	// std::cout << "[AMateria] default constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type)
: _type(type)
{
	// std::cout << "[AMateria] constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& src)
: _type(src.getType())
{
	// std::cout << "[AMateria] copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria(void) // avoid link pb if not defined in sub-classes
{
	// std::cout << "[AMateria] destructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	if (this == &rhs)
		return *this;

	this->_type = rhs.getType();
	return *this;
}

/*
	Getters - Setters
*/
const std::string&	AMateria::getType(void) const
{
	return this->_type;
}

void	AMateria::setType(const std::string& newType)
{
	this->_type = newType;
}

/*
	Others
*/
void	AMateria::use(ICharacter& target)
{
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
