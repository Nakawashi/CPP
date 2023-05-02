/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:06:38 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/02 17:46:47 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const std::string	ShrubberyCreationForm::_fileInput =
"                                 ,..\n"
"                    .*  **#* %%#\n"
"              .,,   ,%**#(.*#####%/.  .\n"
"                 %%#####///(#((##/, ,*\n"
"          (( ,%. %%/(%####///**(//(#,.*,\n"
"      .%* %% ,%%%%%%%%##%%(//**/////##//   ,,\n"
"        (%%%###%%##%%#**##/(#((##/(#(/##/. ..*,\n"
"     **,(%%%##(##%%((//(((%##%%###((((##%##//\n"
"   /(**(#%%%((*((#####(/#####((%%#%%((##(#%##\n"
"   ,,*/%%%%%##(#####%%((##%%%//##%##/*(#%%#*,(/\n"
"     %%%%%%%##%##%%%%(**((%%%%%%%%%%%%##%%%.\n"
"      .%* %%%%%%%%%%%%((%%#%%%%%%%%%%%%%%%%##\n"
"            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%*\n";

ShrubberyCreationForm::ShrubberyCreationForm(void)
: AForm("ShrubberyForm", 145, 137), _target("jardin")
{
	// default constructor, every shrubbery must have those values at initialisation
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
: AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	// copy constructor
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// destructor
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return *this;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void	ShrubberyCreationForm::setTarget(std::string newTarget)
{
	this->_target = newTarget;
}

// the form has to be signed before execution
void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else
	{
		std::string	filename = this->getTarget() + "_shrubbery";
		std::ofstream	filestream(filename);

		if (!filestream.is_open())
			throw ShrubberyCreationForm::OpenFilestreamException();
		filestream << ShrubberyCreationForm::_fileInput;
		filestream.close();
		std::cout << filename << " created" << std::endl;
	}
}

const char* ShrubberyCreationForm::OpenFilestreamException::what() const throw()
{
	return "ShrubberyCreationForm : file could not open";
}

