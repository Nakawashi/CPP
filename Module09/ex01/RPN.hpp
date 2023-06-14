#ifndef RPN_CPP
# define RPN_CPP

# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"
# define VIOLET		"\033[0;36m"
# define NONE		"\033[0m"
# define BOLDWHITE	"\033[1m\033[37m"

# include <iostream>
# include <stack>
# include <string>
# include <exception>

/*
	<stack>
	LIFO : order matters.
	RPN allows to insert an undefined amount of numbers.
	The operator will be applied to the two lasts operands :
	d'abord l'avant dernier puis le dernier.
*/

class RPN
{
public:
	RPN(std::string expression);
	~RPN(void);

	double	calculate(const char c);
	double	getResult(void) const;


	class DivisionZeroException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

private:
	RPN(void);
	RPN(const RPN& src);
	RPN&	operator=(const RPN& rhs);

	int					_result;
	std::stack<double>	_stack; // double bc of divisions
};

#endif
