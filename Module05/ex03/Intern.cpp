/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:02:40 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/06 17:37:30 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

std::string	Intern::_formNames[NUM_FORM] =
{
	"ShrubberyCreationForm",
	"RobotomyRequestForm",
	"PresidentialPardonForm"
};

Intern::Intern(void)
{
	// default constructor
}

Intern::Intern(const Intern& src)
{
	// copy constructor
	*this = src;
}

Intern::~Intern(void)
{
	// destructor
}

Intern&	Intern::operator=(const Intern& rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

AForm*	Intern::makeForm(const std::string formName, const std::string target)
{
	if (formName.empty() || target.empty())
		throw Intern::FormDoesntExists();

	for (size_t i = 0; i < NUM_FORM; i++)
	{
		if (formName == _formNames[i])
		{
			switch (i)
			{
				case 0:
					return new ShrubberyCreationForm(target);
					break;
				case 1:
					return new RobotomyRequestForm(target);
					break;
				case 2:
					return new PresidentialPardonForm(target);
					break;
				default:
					break;
			}
		}
	}
	throw Intern::FormDoesntExists();
	return NULL;
}
