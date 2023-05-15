/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:50:34 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/15 15:34:00 by lgenevey         ###   ########.fr       */
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

	bool	_isChar(void);
	bool	_isFloat(void);
	bool	_isDouble(void);
	bool	_isInteger(void);
	void	_charConversion(std::string input);
	void	_intConversion(std::string input);
	void	_floatConversion(std::string input);
	void	_doubleConversion(std::string input);
};

// #endif
