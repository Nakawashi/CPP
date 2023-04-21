/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:57:09 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/21 23:04:54 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
	Coplien
*/
Character::Character(void)
: _name(), _inventory()
{
	// std::cout << "[Character] default constructor called" << std::endl;
}

Character::Character(const std::string& name)
: _name(name), _inventory()
{
	// std::cout << "[Character] constructor called" << std::endl;
}

Character::Character(const Character& src)
{
	// std::cout << "[Character] copy constructor called" << std::endl;
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
	// std::cout << "[Character] destructor called" << std::endl;
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

/*
	Getters, Setters
*/
const std::string&	Character::getName(void) const
{
	return this->_name;
}

void	Character::setName(const std::string newName)
{
	this->_name = newName;
}

void	Character::equip(AMateria *m)
{
	for (size_t i = 0; i < A_SIZE; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << m->getType() << " added" << std::endl;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > A_SIZE)
	{
		std::cout << "Error: incorrect idx" << std::endl;
		return ;
	}
	if (this->_inventory[idx] != NULL)
	{
		std::cout << this->_inventory[idx] << " deleted" << std::endl;
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= A_SIZE)
	{
		std::cout << "Error: incorrect idx" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}
