/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:40:52 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/17 17:29:33 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
Cat::Cat(void)
: AAnimal(), _type("Cat"), _brain(new Brain())
{
	std::cout << VIOLET << "[Cat] default constructor called" << NONE << std::endl;
}

Cat::Cat(std::string type)
: AAnimal(), _type(type), _brain(new Brain())
{
	std::cout << VIOLET << "[Cat] <type> constructor called" << NONE << std::endl;
}

Cat::Cat(const Cat& src)
: AAnimal(src), _brain(new Brain(*src.getBrain())) // copie profonde
{
	std::cout << VIOLET << "[Cat] copy constructor called" << NONE << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << VIOLET << "[Cat] destructor called" << NONE << std::endl;
	if (this->_brain)
		delete this->_brain;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << VIOLET << "[Cat] assignement operator called" << NONE << std::endl;
	if (this == &rhs)
		return *this;
	this->_type = rhs.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*rhs.getBrain());
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

Brain*	Cat::getBrain(void) const
{
	return this->_brain;
}

std::ostream&	operator<<(std::ostream& stream, const Cat &rhs)
{
	stream << VIOLET << "\n[Cat] type : " << rhs.getType() << NONE << std::endl;
	return stream;
}
