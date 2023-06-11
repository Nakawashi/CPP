#include "RPN.hpp"

RPN::RPN(std::string expression)
: _expression(expression) {}

RPN::RPN(const RPN& src)
: _expression(src._expression)
{
	*this = src;
}

RPN::~RPN(void) {}

RPN&	RPN::operator=(const RPN& rhs)
{
	if (this == &rhs)
		return *this;
	this->_expression = rhs.getExpression();
	return *this;
}

std::string	RPN::getExpression(void) const
{
	return _expression;
}

// const char* RPN::NbArgumentsException::what() const throw()
// {
// 	static std::string	message;
// 	message = RED + "Error : invalid number of arguments. Need at least one expression." + NONE;
// 	return message.c_str();
// }

const char* RPN::NbOperandException::what() const throw()
{
	return "Error : Calculation not possible. Invalid number of operators.";
}

const char* RPN::DivisionZeroException::what() const throw()
{
	return "Error : Division by zero is not allowed.";
}
