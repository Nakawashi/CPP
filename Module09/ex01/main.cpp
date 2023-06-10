#include <iostream>
#include <string>
// #include "RPN.hpp"

# include <stack>


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
	std::string		args = argv;
	std::stack<int>	arguments;

	for (int i = 1; i < argc; ++i)
	{
		arguments.push(static_cast<int>(argv[i]));
	}

	while (!arguments.empty()) {
	std::cout << arguments.top() << std::endl;
	arguments.pop();
}

	return 0;
}
