/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:57:09 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/21 20:16:48 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
	Coplien
*/
Character::Character(void)
: _name(), _inventory()
{
	std::cout << "[Character] default constructor called" << std::endl;
}

Character::Character(const std::string& name)
{
	std::cout << "[Character] constructor called" << std::endl;
}

Character::Character(const Character& src)
{
	std::cout << "[Character] copy constructor called" << std::endl;
	this->_name = src.getName();
	for (size_t i = 0; i < A_SIZE; i++)
	{
		if (src._inventory[i] != NULL)
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character(void) // avoid link pb if not defined in sub-classes
{
	std::cout << "[Character] destructor called" << std::endl;
	for (size_t i = 0; i < A_SIZE; ++i)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

Character&	Character::operator=(const Character& rhs)
{
	if (this != &rhs) // self assignment
	{
		this->_name = rhs.getName();
		for (size_t i = 0; i < A_SIZE; i++)
		{
			if (this->_inventory[i] != NULL)
			{
				delete this->_inventory[i];
				_inventory[i] = NULL;
			}
			if (rhs._inventory[i] != NULL)
				this->_inventory[i] = rhs._inventory[i]->clone(); // deep copy
		}
	}
	return *this;
}

//getName, setName
// equip, unequip, use