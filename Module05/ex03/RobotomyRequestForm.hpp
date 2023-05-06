/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:24:40 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/06 20:31:17 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <fstream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& src);
	~RobotomyRequestForm(void);

	RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);

	std::string				getTarget(void) const;
	void					setTarget(std::string newTarget);

	void					execute(const Bureaucrat& executor) const;

	class RobotomisationFailedException : public std::exception
	{
		virtual const char* what() const throw();
	};

private:
	std::string	_target;
};

#endif
