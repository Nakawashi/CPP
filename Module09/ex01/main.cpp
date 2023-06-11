# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"
# define VIOLET		"\033[0;36m"
# define NONE		"\033[0m"
# define BOLDWHITE	"\033[1m\033[37m"

#include <iostream>
#include "RPN.hpp"


// template<typename T>
// void	displayVector(const std::vector<T>& vector)
// {
// 	typename std::vector<T>::const_iterator	it;
// 	for (it = vector.begin(); it != vector.end(); ++it)
// 	{
// 		std::cout << *it << std::endl;
// 	}
// }

int main(int argc, char** argv)
{
	if (argc == 1)
	{
		std::cout
			<< RED
			<< "Error : Invalid number of arguments"
			<< NONE
			<< std::endl;
		return 1;
	}
	std::string	av(argv[1]);
	int	i = 2;
	while (argv[i])
	{
		if (argv[i] != ' '
			|| isdigit(argv[i])
			|| argv[i] == '+'
			|| argv[i] == '-'
			|| argv[i] == '/'
			|| argv[i] == '*')
		{
			av += ' ';
			av += argv[i];
			++i;
		}
		else
		{
			std::cout
			<< RED
			<< "Error : Invalid expression values"
			<< NONE
			<< std::endl;
		}
				return 1;
	}
	RPN	rpnCalculator(av);
	std::cout << "av : " << av << std::endl;
	return 0;
}
