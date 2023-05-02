/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:27:38 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/02 23:39:31 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
: AForm("ShrubberyForm", 72, 45), _target("jardin")
{
	// default constructor, every shrubbery must have those values at initialisation
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
: AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	// copy constructor
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// destructor
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return *this;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

void	RobotomyRequestForm::setTarget(std::string newTarget)
{
	this->_target = newTarget;
}

// the form has to be signed before execution
void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else
	{
		int	random = rand() % 2;
		std::cout << random << std::endl;
		if (!random)
			throw RobotomisationFailedException();
		else
			std::cout << "Bvvvvvvvvveuuh " << this->_target << " is robotomised with success" << std::endl;
	}
}
