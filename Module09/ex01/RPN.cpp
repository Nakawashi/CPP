/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:53:44 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/14 15:43:38 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string expression)
: _op1(0), _op2(0)
{
	for (size_t i = 0; i < expression.length(); ++i)
	{
		const char	c = expression[i];
		if (isdigit(c))
		{
			// std::cout << "c : [" << c << "]" << std::endl;
			_stack.push(std::atoi(&c)); // int bc we got 0-9
		}
		if (c != ' ' && !isdigit(c) && _stack.size() > 1)
		{
			// restult = avant dernier c dernier
			_stack.push(this->calculate(c)); // on ajoute le resultat du calcul
		}
			// _result += this->calculate(c);
	}
}

RPN::~RPN(void) {}

double	RPN::calculate(const char c)
{
	if (c == '+')
	{
		_op1 = _stack.top();
		_stack.pop();
		_op2 = _stack.top();
		_stack.pop();
		return _op2 + _op1;
	}
	if (c == '-')
	{
		_op1 = _stack.top();
		_stack.pop();
		_op2 = _stack.top();
		_stack.pop();
		return _op2 - _op1;
	}
	if (c == '*')
	{
		_op1 = _stack.top();
		_stack.pop();
		_op2 = _stack.top();
		_stack.pop();
		return _op2 * _op1;
	}
	if (c == '/')
	{
		_op1 = _stack.top();
		if (_op1 == 0)
			throw RPN::DivisionZeroException();
		_stack.pop();
		_op2 = _stack.top();
		_stack.pop();
		return _op2 / _op1;
	}
	return _stack.top();
}

double	RPN::getResult(void) const
{
	return _stack.top();
}

const char* RPN::DivisionZeroException::what() const throw()
{
	return "Error : Not a number.";
}
