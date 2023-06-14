/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:53:44 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/14 14:53:45 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string expression)
{
	for (size_t i = 0; i < expression.length(); ++i)
	{
		const char	c = expression[i];
		if (isdigit(c))
		{
			std::cout << "c : [" << c << "]" << std::endl;
			_stack.push(std::atoi(&c)); // int bc we got 0-9
		}
		std::cout << "stack.top() : " << _stack.top() << "\n" << std::endl;
		if (c != ' ' && !isdigit(c))
		{
			_result = this->calculate(c);
		}
			// _result += this->calculate(c);
	}
}

RPN::~RPN(void) {}


double	RPN::calculate(const char c)
{
	double	op1 = 0;
	double	op2 = 0;
	if (c == '+' && _stack.size() > 1)
	{
		op1 = _stack.top();
		std::cout << op1 << std::endl;
		_stack.pop();
		op2 = _stack.top();
		std::cout << op2 << std::endl;
		_stack.pop();
		return op2 + op1;
	}
	if (c == '-' && _stack.size() > 1)
	{
		op1 = _stack.top();
		std::cout << op1 << std::endl;
		_stack.pop();
		op2 = _stack.top();
		std::cout << op2 << std::endl;
		_stack.pop();
		return op2 - op1;
	}
	if (c == '*' && _stack.size() > 1)
	{
		op1 = _stack.top();
		std::cout << op1 << std::endl;
		_stack.pop();
		op2 = _stack.top();
		std::cout << op2 << std::endl;
		_stack.pop();
		return op2 * op1;
	}
	if (c == '/' && _stack.size() > 1)
	{
		op1 = _stack.top();
		std::cout << op1 << std::endl;
		_stack.pop();
		op2 = _stack.top();
		std::cout << op2 << std::endl;
		_stack.pop();
		return op2 / op1;
	}
	return _result;
}

double	RPN::getResult(void) const
{
	return _result;
}




// const char* RPN::NbOperandException::what() const throw()
// {
// 	return "Error : Calculation not possible. Invalid number of operators.";
// }

const char* RPN::DivisionZeroException::what() const throw()
{
	return "Error : Division by zero is not allowed.";
}
