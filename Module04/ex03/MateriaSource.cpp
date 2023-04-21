/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 21:34:32 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/21 22:26:54 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "[MateriaSource] default constructor called" << std::endl;
	for (size_t i = 0; i < MateriaSource::_nbMaterials; i++)
	{
		this->_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	for (size_t i = 0; i < MateriaSource::_nbMaterials; i++)
	{
		if (src._materias[i])
			this->_materias[i] = src._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < MateriaSource::_nbMaterials; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs) // self assignment
	{
		for (size_t i = 0; i < MateriaSource::_nbMaterials; i++)
		{
			if (this->_materias[i])
			{
				delete this->_materias[i];
				this->_materias[i] = NULL;
			}
			if (rhs._materias[i])
				this->_materias[i] = rhs._materias[i]->clone();
		}
	}
	return *this;
}

/*
	fill first available index, but doesn't overflow its capacity
*/
void	MateriaSource::learnMateria(AMateria* materia)
{
	int	i = 0;

	while (i < MateriaSource::_nbMaterials && this->_materias[i])
		i++;
	if (i < MateriaSource::_nbMaterials)
		this->_materias[i] = materia;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (size_t i = 0; i < MateriaSource::_nbMaterials; i++)
	{
		if (this->_materias[i]->getType() == type)
		{
			return this->_materias[i]->clone();
		}
	}
	return NULL;
}

