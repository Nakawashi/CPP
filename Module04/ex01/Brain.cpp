/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:30:29 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/18 12:27:52 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Colors.hpp"

// ----- Constructors (canonical form) ---------------------------------------//
Brain::Brain(void)
{
	std::cout << YELLOW << "[Brain] default constructor called" << NONE << std::endl;
	for (size_t i = 0; i < A_SIZE; i++)
	{
		this->_ideas[i] = "Empty brain";
	}
}

Brain::Brain(const Brain& src)
{
	std::cout << YELLOW << "[Brain] copy constructor called" << NONE << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << YELLOW << "[Brain] destructor called" << NONE << std::endl;
}

Brain&	Brain::operator=(const Brain& rhs)
{
	std::cout << YELLOW << "[Brain] assignement operator called" << NONE << std::endl;
	if (this == &rhs)
		return *this;
	for (size_t i = 0; i < A_SIZE; i++)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}
// ----- Constructors (canonical form) ---------------------------------------//

const std::string*	Brain::getIdeasArray(void) const
{
	return this->_ideas;
}

const std::string	Brain::getIdea(size_t i) const
{
	if (i < 0 || i >= A_SIZE)
		return "Error accessing the idea's index";
	return this->_ideas[i];
}

void	Brain::setIdea(size_t i, std::string idea)
{
	if (i < 0 || i >= A_SIZE)
		std::cout << "Error accessing the idea's index" << std::endl;
	else
		this->_ideas[i] = idea;
}

void	Brain::printIdeas() const
{
	for (size_t i = 0; i < 10; i++) // A_SIZE relou
	{
		std::cout << "[" << i << "] " << this->getIdea(i) << std::endl;
	}
}
