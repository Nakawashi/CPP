/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:41:25 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/02 01:25:35 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form(void);
	Form(const std::string name, unsigned int gradeSign, unsigned int gradeExec);
	Form(const Form& src);
	~Form(void);

	Form&	operator=(const Form& rhs);

	const std::string&	getName(void) const;
	bool				getSigned(void) const;
	unsigned int		getGradeSign(void) const;
	unsigned int		getGradeExec(void) const;

	void				beSigned(const Bureaucrat& Bureaucrat);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

private:
	const std::string	_name;
	bool				_signed;
	const unsigned int	_gradeSign;
	const unsigned int	_gradeExec;
};

std::ostream& operator<<(std::ostream& stream, const Form& rhs);

#endif
