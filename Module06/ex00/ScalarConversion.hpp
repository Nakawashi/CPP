/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:50:34 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/15 17:48:38 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef SCALARCONVERSION_HPP
// # define SCALARCONVERSION_HPP
#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <limits>
#include <exception>
#include <regex>

class ScalarConversion
{
public:
	ScalarConversion(void);
	ScalarConversion(std::string& user_input);
	ScalarConversion(const ScalarConversion& src);
	~ScalarConversion(void);

	ScalarConversion&		operator=(const ScalarConversion& rhs);

	std::string				getInput(void) const;
	std::stringstream&		getStringStream(void);
	std::string				getType(void) const;
	void					setInput(std::string newInput);
	void					setType(std::string newType);

	void					storeInputType(void);
	void					doConversion(void);

	class UnrecognizedTypeException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

private:
	std::string			_input;
	std::stringstream	_ss;
	std::string			_type;
	bool				_signed;

	static std::string	_science[6];

	bool	_isChar(void);
	bool	_isInteger(void);
	bool	_isFloat(void);
	bool	_isDouble(void);
	bool	_forScience(void);
	void	_charConversion(void);
	void	_intConversion(void);
	void	_floatConversion(void);
	void	_doubleConversion(void);
};

// #endif
