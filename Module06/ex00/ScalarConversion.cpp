/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:23:11 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/15 15:33:47 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(void) : _input(0) { }

ScalarConversion::ScalarConversion(std::string& user_input) : _input(user_input), _ss(user_input) { }

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

std::stringstream&	ScalarConversion::getStringStream(void)
{
	return this->_ss;
}

std::string	ScalarConversion::getType(void) const
{
	return this->_type;
}

void	ScalarConversion::setType(std::string newType)
{
	this->_type = newType;
}


const char* ScalarConversion::UnrecognizedTypeException::what() const throw()
{
	return "User input error : type unrecognized";
}


bool	ScalarConversion::_isChar(void)
{
	if (getInput().length() == 1 && isalpha(getInput()[0]))
	{
		std::cout << "char" << std::endl;
		return true;
	}
	return false;
}

/*
	clear() : clean reset errors indicators but do not delete the content

	std::string::npos :valeur renvoyée par la méthode find()
	si elle ne trouve pas le char voulu dans la chaîne
*/
bool	ScalarConversion::_isInteger(void)
{
	int	input_int;

	getStringStream().clear();
	getStringStream().str(getInput());

	if (getStringStream() >> input_int
		&& getInput().find(".") == std::string::npos)
	{
		std::cout << "integer" << std::endl;
		return true;
	}
	return false;
}

/*
	careful : 5.0f can't be converted using stringstream because of the f char
*/
bool	ScalarConversion::_isFloat(void)
{
	std::string	sub_input;
	float		input_float;

	getStringStream().clear();

	if (getInput().find('.') != std::string::npos
		&& getInput().back() == 'f')
		{
			sub_input = getInput().substr(0, getInput().length() - 1);
			getStringStream().str(sub_input);
			if (getStringStream() >> input_float)
			{
				std::cout << "float" << std::endl;
				return true;
			}
		}
	// std::cout << "pas un float : " << getInput().back() << std::endl;
	// std::cout << "fail() : " << getStringStream().fail() << std::endl;
	return false;
}

bool	ScalarConversion::_isDouble(void)
{
	double	input_double;

	getStringStream().clear();
	getStringStream().str(getInput());

	if (getStringStream() >> input_double
		&& getInput().find(".") != std::string::npos)
	{
		std::cout << "double" << std::endl;
		return true;
	}
	return false;
}


void	ScalarConversion::storeInputType(void)
{
	if (this->_isChar())
		setType("char");
	else if (this->_isInteger())
		setType("integer");
	else if (this->_isFloat())
		setType("float");
	else if (this->_isDouble())
		setType("double");
	else
		std::cout << "Error : " << std::endl;
}
