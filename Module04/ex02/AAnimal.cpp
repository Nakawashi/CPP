/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:09:19 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/18 14:09:51 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
AAnimal::AAnimal(void)
: _type("aanimal")
{
	std::cout << BLUE << "[AAnimal] default constructor called" << NONE << std::endl;
}

AAnimal::AAnimal(std::string type)
: _type(type)
{
	std::cout << BLUE << "[AAnimal] <type> constructor called" << NONE << std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
: _type(src.getType())
{
	std::cout << BLUE << "[AAnimal] copy constructor called" << NONE << std::endl;
	*this = src;
}

AAnimal::~AAnimal(void)
{
	std::cout << BLUE << "[AAnimal] destructor called" << NONE << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << BLUE << "[AAnimal] assignement operator called" << NONE << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

// ----- Getters - Setters----------------------------------------------------//

std::string	AAnimal::getType(void) const
{
	return this->_type;
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}
// ----- Getters - Setters----------------------------------------------------//

std::ostream&	operator<<(std::ostream& stream, const AAnimal &rhs)
{
	stream << BLUE << "\n[AAnimal] type : " << rhs.getType() << NONE << std::endl;
	return stream;
}
