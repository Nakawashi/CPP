/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:23:11 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/08 20:11:25 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

const std::string	ScalarConversion::_types[4] =
{
	"char",
	"int",
	"float",
	"double"
};

ScalarConversion::ScalarConversion(void)
: _user_input(0)
{
	return ;
}

ScalarConversion::ScalarConversion(std::string& user_input)
: _user_input(user_input)
{
	return ;
}

ScalarConversion::ScalarConversion(const ScalarConversion& src)
{
	*this = src;
}

ScalarConversion::~ScalarConversion(void)
{

}

ScalarConversion&	ScalarConversion::operator=(const ScalarConversion& rhs)
{
	//if (this != &rhs)
		/**/

}

std::string	ScalarConversion::getInput(void) const
{
	return this->_user_input;
}
