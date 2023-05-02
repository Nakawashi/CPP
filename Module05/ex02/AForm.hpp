/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:41:25 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/02 16:25:39 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:
	AForm(void);
	AForm(const std::string name, unsigned int gradeSign, unsigned int gradeExec);
	AForm(const AForm& src);
	virtual ~AForm(void);

	AForm&	operator=(const AForm& rhs);

	const std::string&	getName(void) const;
	bool				getSigned(void) const;
	unsigned int		getGradeSign(void) const;
	unsigned int		getGradeExec(void) const;

	void				beSigned(const Bureaucrat& bureaucrat);
	virtual void		execute(const Bureaucrat& executor) const = 0;

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

	class FormSignedAlreadyException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class FormNotSignedException : public std::exception
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

std::ostream& operator<<(std::ostream& stream, const AForm& rhs);

#endif
