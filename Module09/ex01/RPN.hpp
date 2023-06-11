#ifndef RPN_CPP
# define RPN_CPP

# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"
# define VIOLET		"\033[0;36m"
# define NONE		"\033[0m"
# define BOLDWHITE	"\033[1m\033[37m"

# include <stack>
# include <string>
# include <exception>
# include <regex>

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
	RPN(const RPN& src);
	~RPN(void);

	RPN&			operator=(const RPN& rhs);
	std::string&	getExpression(void) const;

	// class NbArgumentsException : public std::exception
	// {
	// 	public:
	// 		virtual const char* what() const throw();
	// };

	class NbOperandException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class DivisionZeroException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

private:
	RPN(void);

	std::string			_expression;
	int					_nbTokens;
	std::stack<double>	_operandStack;
};

#endif

/*
	boucler sur la string, j'avance tant que j'ai un espace
	char :
		si c'est un digit entre 0 et 9 -> ajouter dans stack
		si c'est une operation, effectuer le calcul et attention si on divise par zero
		si c'est autre chose : lancer une exception
*/
