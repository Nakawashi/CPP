/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:23:11 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/15 18:51:01 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

std::string	ScalarConversion::_science[6] =
{
	"-inff",
	"+inff",
	"nanf",
	"-inf",
	"+inf",
	"nan"
};

// CANONICAL
ScalarConversion::ScalarConversion(void) : _input(0) { }

ScalarConversion::ScalarConversion(std::string& user_input)
: _input(user_input), _ss(user_input), _type(""), _signed(false) { }

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

// GET, SET
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

void	ScalarConversion::setInput(std::string newInput)
{
	this->_input = newInput;
}

void	ScalarConversion::setType(std::string newType)
{
	this->_type = newType;
}


// EXCEPTIONS
const char* ScalarConversion::UnrecognizedTypeException::what() const throw()
{
	return "User input error : type unrecognized";
}


// GET TYPE
bool	ScalarConversion::_isChar(void)
{
	if (getInput().length() == 1
		&& isalpha(getInput()[0]))
	{
		return true;
	}
	if (isprint(getInput()[0] == 0))
		std::cerr << "Non printable caracter" << std::endl;
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
		&& getInput().find(".") == std::string::npos
		&& std::regex_match(getInput(), std::regex("\\d+")))
	{
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
		return true;
	}
	return false;
}



// SET AND STORE USER INPUT TYPE
bool	ScalarConversion::_forScience(void)
{
	for (size_t i = 0; i < 6; i++)
	{
		if (getInput() == _science[i])
		{
			setType(_science[i]);
			return true;
		}
	}
	return false;
}

void	ScalarConversion::storeInputType(void)
{
	size_t input_len = getInput().length();

	if (_forScience())
		return ;

	if (this->_input[0] == '-' && input_len > 1)
	{
		setInput(getInput().substr(1, input_len));
		this->_signed = true;
	}

	if (this->_isChar())
		setType("char");
	else if (this->_isInteger())
		setType("integer");
	else if (this->_isFloat())
		setType("float");
	else if (this->_isDouble())
		setType("double");
	else
		throw ScalarConversion::UnrecognizedTypeException();
}

void	ScalarConversion::doConversion(void)
{
	if (getType() == "char")
	{
		_charConversion();
	}
	else if (getType() == "integer")
	{
		_intConversion();
	}
	else if (getType() == "float")
	{
		_floatConversion();
	}
	else if (getType() == "double")
	{
		_doubleConversion();
	}
	else if (getType() == "nanf" || getType() == "nan")
	{
		std::cout << "char\t: impossible\n"
		<< "int\t: impossible\n"
		<< "float\t: nanf\n"
		<< "double\t: nan"
		<< std::endl;
	}
}

void	ScalarConversion::_charConversion(void)
{
	char	c = getInput().front();
	int		n = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	std::cout << "char\t: " << c << "\n"
	<< "int\t: " << n << "\n"
	<< "float\t: " << f << ".0f\n"
	<< "double\t: " << d << ".0\n"
	<< std::endl;
}

void	ScalarConversion::_intConversion(void)
{
	int		n = stoi(getInput());
	char	c = static_cast<char>(n);
	float	f = static_cast<float>(n);
	double	d = static_cast<double>(n);

	if (isprint(c) == 0)
	{
		c = ' ';
		std::cout << "char\t: " << "impossible" << "\n";
	}
	else
		std::cout << "char\t: " << c << "\n";

	std::cout << "int\t: " << n << "\n"
	<< "float\t: " << f << ".0f\n"
	<< "double\t: " << d << ".0\n"
	<< std::endl;
}

void	ScalarConversion::_floatConversion(void)
{
	float	f = stof(getInput());
	char	c = static_cast<char>(f);
	int		n = static_cast<int>(f);
	double	d = static_cast<double>(f);

	if (isprint(c) == 0)
	{
		c = ' ';
		std::cout << "char\t: " << "impossible" << "\n";
	}
	else
		std::cout << "char\t: " << c << "\n";

	std::cout << "int\t: " << n << "\n"
	<< "float\t: " << f << "\n"
	<< "double\t: " << d << "\n"
	<< std::endl;
}

void	ScalarConversion::_doubleConversion(void)
{
	double	d = stod(getInput());
	char	c = static_cast<char>(d);
	int		n = static_cast<int>(d);
	float	f = static_cast<float>(d);

	if (isprint(c) == 0)
	{
		c = ' ';
		std::cout << "char\t: " << "impossible" << "\n";
	}
	else
		std::cout << "char\t: " << c << "\n";

	std::cout << "int\t: " << n << "\n"
	<< "float\t: " << f << "\n"
	<< "double\t: " << d << "\n"
	<< std::endl;
}


/*
	converti en tous les types demandés

	Si on a un int
		convertir string en int
		puis tenter une conversion vers les trois autres types

*/
