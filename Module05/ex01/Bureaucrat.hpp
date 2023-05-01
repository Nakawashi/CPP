/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:24:49 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/02 01:11:36 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

# include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(const std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat& src);
	~Bureaucrat(void);

	Bureaucrat&	operator=(const Bureaucrat& rhs);

	const std::string	getName() const;
	unsigned int		getGrade() const;
	void				setGrade(unsigned int newGrade);

	void				incrementGrade();
	void				decrementGrade();
	void				signForm(Form& form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("[bureaucrat] grade is too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("[bureaucrat] grade is too low");
			}
	};

private:
	const std::string	_name;
	unsigned int		_grade;
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat &rhs);

#endif
