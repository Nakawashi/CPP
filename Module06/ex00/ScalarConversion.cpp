/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:23:11 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/11 01:15:31 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(void) : _input(0) { }

ScalarConversion::ScalarConversion(std::string& user_input) : _input(user_input) { }

ScalarConversion::ScalarConversion(const ScalarConversion& src)
{
	*this = src;
}

ScalarConversion::~ScalarConversion(void)
{
	return ;
}

ScalarConversion&	ScalarConversion::operator=(const ScalarConversion& rhs)
{
	if (this != &rhs)
		this->_input = rhs.getInput();
	return *this;

}

std::string	ScalarConversion::getInput(void) const
{
	return this->_input;
}

std::string	ScalarConversion::getType(void) const
{
	return this->_type;
}

/*
	clear() : clean reset errors indicators but do not delete the content

	Creation of a stringstream object based from user input
	Try ton convert it into int, float and double.
	If success, display the type.
*/
void	ScalarConversion::storeInputType(void)
{
	std::stringstream	ss(this->_input);
	int					input_int;
	float				input_float;
	double				input_double;

	if (ss >> input_int && !(this->_input.find(".") != std::string::npos))
		std::cout << "integer" << std::endl;
	else
	{
		ss.clear();
		ss.str(this->_input);
		if (ss >> input_float)
			std::cout << "float" << std::endl;
		else
		{
			ss.clear();
			ss.str(this->_input);
			if (ss >> input_double)
				std::cout << "double" << std::endl;
		}
	}
}
