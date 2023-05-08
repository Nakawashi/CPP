/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:47:51 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/08 13:00:33 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
: AForm("PresidentialPardonForm", 25, 5), _target("Arthur Dent")
{
	// default constructor, every form must have those values at initialisation
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	// default constructor, every form must have those values at initialisation
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
: AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	// copy constructor
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// destructor
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return *this;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

void	PresidentialPardonForm::setTarget(std::string newTarget)
{
	this->_target = newTarget;
}

// the form has to be signed before execution
void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
	}
}
