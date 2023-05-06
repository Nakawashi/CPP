/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:45:40 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/06 16:01:19 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm& src);
	~PresidentialPardonForm(void);

	PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);

	std::string				getTarget(void) const;
	void					setTarget(std::string newTarget);

	void					execute(const Bureaucrat& executor) const;

private:
	std::string	_target;
};

#endif
