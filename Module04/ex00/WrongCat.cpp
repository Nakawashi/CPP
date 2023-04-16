/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:46:33 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/16 14:46:34 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
WrongCat::WrongCat(void)
: WrongAnimal(), _type("WrongCat")
{
	std::cout << VIOLET << "[WrongCat] default constructor called" << NONE << std::endl;
}

WrongCat::WrongCat(std::string type)
: WrongAnimal(), _type(type)
{
	std::cout << VIOLET << "[WrongCat] <type> constructor called" << NONE << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
{
	std::cout << VIOLET << "[WrongCat] copy constructor called" << NONE << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << VIOLET << "[WrongCat] destructor called" << NONE << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << VIOLET << "[WrongCat] assignement operator called" << NONE << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

// ----- Getters - Setters----------------------------------------------------//

std::string	WrongCat::getType(void) const
{
	return this->_type;
}

void	WrongCat::setType(std::string type)
{
	this->_type = type;
}
// ----- Getters - Setters----------------------------------------------------//

// On aurait pu prendre en parametre une ref sur Animal ou un pointeur sur Animal pour creer une resolution dynamique des liens avec une fonction tierce
void	WrongCat::makeSound(void) const
{
	std::cout << VIOLET << "\n[WrongCat] meows\n" << NONE << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, const WrongCat &rhs)
{
	stream << VIOLET << "\n[WrongCat] type : " << rhs.getType() << NONE << std::endl;
	return stream;
}
