/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:27:49 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/18 14:38:30 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string& type)
{
	std::cout << "[AMateria] constructor called" << std::endl;
}

AMateria::~AMateria(void) // avoid link pb if not defined in sub-classes
{
	std::cout << "[AMateria] destructor called" << std::endl;
}

const std::string&	AMateria::getType(void) const
{
	return this->_type;
}

void	AMateria::setType(const std::string& newType)
{
	this->_type = newType;
}
