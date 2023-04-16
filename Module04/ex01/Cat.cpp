/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:40:52 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/16 21:18:05 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
Cat::Cat(void)
: Animal(), _type("Cat"), _brain(new Brain)
{
	std::cout << VIOLET << "[Cat] default constructor called" << NONE << std::endl;
}

Cat::Cat(std::string type)
: Animal(), _type(type), _brain(new Brain)
{
	std::cout << VIOLET << "[Cat] <type> <brain> constructor called" << NONE << std::endl;
}

Cat::Cat(const Cat& src)
: Animal(src) // copie les membres de base
{
	std::cout << VIOLET << "[Cat] copy constructor called" << NONE << std::endl;
	this->_brain = new Brain(*src._brain);
}

Cat::~Cat(void)
{
	std::cout << VIOLET << "[Cat] destructor called" << NONE << std::endl;
	delete this->_brain;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << VIOLET << "[Cat] assignement operator called" << NONE << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*(this->_brain) = *(rhs.getBrain());
	}
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

// ----- Getters - Setters----------------------------------------------------//

std::string	Cat::getType(void) const
{
	return this->_type;
}

void	Cat::setType(std::string type)
{
	this->_type = type;
}
// ----- Getters - Setters----------------------------------------------------//

// On aurait pu prendre en parametre une ref sur Animal ou un pointeur sur Animal pour creer une resolution dynamique des liens avec une fonction tierce
void	Cat::makeSound(void) const
{
	std::cout << VIOLET << "\n[Cat] meows\n" << NONE << std::endl;
}

// copie profonde : copier la valeur de la variable dans un nouvel emplacement memoire
Cat*	Cat::clone(void) const
{
	return new Cat(*this);
}

Brain*	Cat::getBrain(void) const
{
	return this->_brain;
}

std::ostream&	operator<<(std::ostream& stream, const Cat &rhs)
{
	stream << VIOLET << "\n[Cat] type : " << rhs.getType() << NONE << std::endl;
	return stream;
}
