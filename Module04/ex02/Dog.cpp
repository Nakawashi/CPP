/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:41:07 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/17 17:30:35 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
Dog::Dog(void)
: AAnimal(), _type("Dog"), _brain(new Brain())
{
	std::cout << GREEN << "[Dog] default constructor called" << NONE << std::endl;
}

Dog::Dog(std::string type)
: AAnimal(), _type(type), _brain(new Brain())
{
	std::cout << GREEN << "[Dog] <type> constructor called" << NONE << std::endl;
}

Dog::Dog(const Dog& src)
: AAnimal(src), _brain(new Brain(*src.getBrain()))
{
	std::cout << VIOLET << "[Dog] copy constructor called" << NONE << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << GREEN << "[Dog] destructor called" << NONE << std::endl;
	if (this->_brain)
		delete this->_brain;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << GREEN << "[Dog] assignement operator called" << NONE << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs.getBrain());
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

void	Dog::makeSound(void) const
{
	std::cout << GREEN << "\n[Dog] barks\n" << NONE << std::endl;
}

Brain*	Dog::getBrain(void) const
{

	std::cout << this->_brain->getIdeasArray() << std::endl;
	return this->_brain;
}

std::ostream&	operator<<(std::ostream& stream, const Dog &rhs)
{
	stream << GREEN << "\n[Dog] type : " << rhs.getType() << NONE << std::endl;
	return stream;
}
