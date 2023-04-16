/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:41:07 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/16 20:55:05 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
Dog::Dog(void)
: Animal(), _type("Dog"), _brain(new Brain)
{
	std::cout << GREEN << "[Dog] default constructor called" << NONE << std::endl;
}

Dog::Dog(std::string type)
: Animal(), _type(type), _brain(new Brain)
{
	std::cout << GREEN << "[Dog] <type> constructor called" << NONE << std::endl;
}

Dog::Dog(const Dog& src)
: Animal(src) // copie les membres de base
{
	std::cout << VIOLET << "[Dog] copy constructor called" << NONE << std::endl;
	this->_brain = new Brain(*src._brain);
}

Dog::~Dog(void)
{
	std::cout << GREEN << "[Dog] destructor called" << NONE << std::endl;
	delete this->_brain;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << GREEN << "[Dog] assignement operator called" << NONE << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*(this->_brain) = *(rhs.getBrain());
	}
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

// ----- Getters - Setters----------------------------------------------------//

std::string	Dog::getType(void) const
{
	return this->_type;
}

void	Dog::setType(std::string type)
{
	this->_type = type;
}
// ----- Getters - Setters----------------------------------------------------//

// On aurait pu prendre en parametre une ref sur Animal ou un pointeur sur Animal pour creer une resolution dynamique des liens avec une fonction tierce
void	Dog::makeSound(void) const
{
	std::cout << GREEN << "\n[Dog] barks\n" << NONE << std::endl;
}

Dog*	Dog::clone(void) const
{
	return new Dog(*this);
}

Brain*	Dog::getBrain(void) const
{
	return this->_brain;
}

std::ostream&	operator<<(std::ostream& stream, const Dog &rhs)
{
	stream << GREEN << "\n[Dog] type : " << rhs.getType() << NONE << std::endl;
	return stream;
}
