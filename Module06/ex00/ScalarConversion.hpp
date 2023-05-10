/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:50:34 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/11 00:17:28 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef SCALARCONVERSION_HPP
// # define SCALARCONVERSION_HPP
#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <limits>

class ScalarConversion
{
public:
	ScalarConversion(void);
	ScalarConversion(std::string& user_input);
	ScalarConversion(const ScalarConversion& src);
	~ScalarConversion(void);

	ScalarConversion&	operator=(const ScalarConversion& rhs);

	std::string	getInput(void) const;

	void		do_conversion(void);

private:
	std::string	_input;
	//static const std::string	_types[4];

	//std::string	_detect_type(std::string input); // return the real type of the input
	void		_charConversion(std::string input);
	void		_intConversion(std::string input);
	void		_floatConversion(std::string input);
	void		_doubleConversion(std::string input);
};

// #endif
