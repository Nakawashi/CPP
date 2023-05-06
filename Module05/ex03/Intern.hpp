/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:59:32 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/06 20:30:04 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# define NUM_FORM 3
# include "AForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern& src);
	~Intern(void);

	Intern&	operator=(const Intern& rhs);

	AForm*	makeForm(const std::string formName, const std::string target);

	class FormDoesntExists : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

private:
	static std::string	_formNames[NUM_FORM];
};

#endif
