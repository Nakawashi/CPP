/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:09:19 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/16 18:34:47 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
Animal::Animal(void)
: _type("animal")
{
	std::cout << BLUE << "[Animal] default constructor called" << NONE << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << BLUE << "[Animal] copy constructor called" << NONE << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << BLUE << "[Animal] destructor called" << NONE << std::endl;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << BLUE << "[Animal] assignement operator called" << NONE << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

// ----- Getters - Setters----------------------------------------------------//

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}
// ----- Getters - Setters----------------------------------------------------//

void	Animal::makeSound(void) const
{
	std::cout << BLUE << "\n[Animal] make an undefined sound\n" << NONE << std::endl;
}

Animal*	Animal::clone(void) const
{
	return new Animal(*this);
}


std::ostream&	operator<<(std::ostream& stream, const Animal &rhs)
{
	stream << BLUE << "\n[Animal] type : " << rhs.getType() << NONE << std::endl;
	return stream;
}
