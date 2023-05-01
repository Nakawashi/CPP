/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:26:35 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/01 19:49:57 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
: _name("Default Form Name"), _signed(false), _gradeSign(150), _gradeExec(150)
{
	// default constructor
}

Form::Form(const std::string name, unsigned int gradeSign, unsigned int gradeExec)
: _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	// other default constructor
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& src)
: _name(src.getName()), _signed(false), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec())
{
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{
	// Form class destructor
}


Form&	Form::operator=(const Form& rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

const std::string&	Form::getName(void) const
{
	return this->_name;
}

bool	Form::getSigned(void) const
{
	return this->_signed;
}

unsigned int	Form::getGradeSign(void) const
{
	return this->_gradeSign;
}

unsigned int	Form::getGradeExec(void) const
{
	return this->_gradeExec;
}

void	Form::beSigned(const Bureaucrat& Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->_gradeExec)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "[form] grade too high";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "[form] grade too low";
}

std::ostream& operator<<(std::ostream& stream, const Form& rhs)
{
	stream << "[form's name] : " << rhs.getName() << "\n";
	stream << "is signed : " << rhs.getSigned() << "\n";
	stream << "grade required to sign : " << rhs.getGradeSign() << "\n";
	stream << "grade required to execute : " << rhs.getGradeExec() << std::endl;

	return stream;
}
