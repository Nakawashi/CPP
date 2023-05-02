/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:26:35 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/02 23:03:28 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void)
: _name("Default AForm Name"), _signed(false), _gradeSign(150), _gradeExec(150)
{
	// default constructor
}

AForm::AForm(const std::string name, unsigned int gradeSign, unsigned int gradeExec)
: _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	// other default constructor
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw AForm::GradeTooHighException();
	else if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& src)
: _name(src.getName()), _signed(false), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec())
{
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw AForm::GradeTooHighException();
	else if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm(void)
{
	// AForm class destructor
}


AForm&	AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

const std::string&	AForm::getName(void) const
{
	return this->_name;
}

bool	AForm::getSigned(void) const
{
	return this->_signed;
}

unsigned int	AForm::getGradeSign(void) const
{
	return this->_gradeSign;
}

unsigned int	AForm::getGradeExec(void) const
{
	return this->_gradeExec;
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return "[AForm] not allowed to sign : grade too high";
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return "[AForm] not allowed to sign : grade too low";
}

std::ostream& operator<<(std::ostream& stream, const AForm& rhs)
{
	stream << "[AForm's name] : " << rhs.getName() << "\n"
		<< "is signed : " << rhs.getSigned() << "\n"
		<< "grade required to sign : " << rhs.getGradeSign() << "\n"
		<< "grade required to execute : " << rhs.getGradeExec() << std::endl;

	return stream;
}
