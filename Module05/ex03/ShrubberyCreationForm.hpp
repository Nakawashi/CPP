/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:26:12 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/06 16:30:56 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"
// create shrubbery form

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& src);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);

	std::string				getTarget(void) const;
	void					setTarget(std::string newTarget);

	void					execute(const Bureaucrat& executor) const;

	class OpenFilestreamException : public std::exception
	{
		virtual const char* what() const throw();
	};

private:
	std::string					_target;
	static const std::string	_fileInput;
};

#endif
