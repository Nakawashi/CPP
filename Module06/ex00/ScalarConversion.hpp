/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:50:34 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/08 20:09:21 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef SCALARCONVERSION_HPP
// # define SCALARCONVERSION_HPP
#pragma once

#include <string>
#include <iostream>
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

	do_conversion(std::string input);

private:
	std::string					_user_input;
	static const std::string	_types[4];

	std::string	_detect_type(std::string input); // return the real type of the input
	void		_charConversion(void);
	void		_intConversion(void);
	void		_floatConversion(void);
	void		_doubleConversion(void);
};

// #endif