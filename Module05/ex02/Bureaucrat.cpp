/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:22:51 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/02 13:51:58 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
: _name("Bernardo"), _grade(75)
{
	// default constructor
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade)
: _name(name), _grade(grade)
{
	// an other default constructor
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

// superficial copy of non constant attributes
Bureaucrat::Bureaucrat(const Bureaucrat& src)
: _name(src._name), _grade(src._grade)
{
	// copy constructor
}

Bureaucrat::~Bureaucrat(void)
{
	// destructor
}


Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}


const std::string	Bureaucrat::getName() const
{
	return this->_name;
}

unsigned int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::setGrade(unsigned int newGrade)
{
	if (newGrade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (newGrade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = newGrade;
}

// increment means giving lower Grade
void	Bureaucrat::incrementGrade()
{
	unsigned int	grade;

	grade = getGrade();
	setGrade(--grade);
}

// decrement means giving higher Grade
void	Bureaucrat::decrementGrade()
{
	unsigned int	grade;

	grade = getGrade();
	setGrade(++grade);
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name
				<< " couldn't sign "
				<< form.getName()
				<< " because : "
				<< e.what() << '\n'
				<< std::endl;
	}
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& rhs)
{
	stream << "\nBureaucrat's name : " << rhs.getName() << "\n"
		<< "Grade : " << rhs.getGrade() << std::endl;

	return stream;
}
