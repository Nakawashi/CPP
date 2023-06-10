#ifndef RPN_CPP
# define RPN_CPP

# include <stack>
# include <exception>

/*
	<stack>
	LIFO : order matters.
	RPN allows to insert an undefined amount of numbers.
	The operator will be applied to the two lasts input numbers :
	d'abord l'avant dernier puis le dernier.
*/


class RPN
{
public:
	RPN(char)
	RPN(const RPN& src);
	~RPN(void);

	RPN&	operator=(const RPN& rhs);

	class NbArgumentException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

private:
	RPN(void);

	std::stack<int>	stack;
};

#endif
