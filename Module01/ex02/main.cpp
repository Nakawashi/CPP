#include <string>
#include <iostream>

# define VIOLET			"\033[0;36m"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define BOLDWHITE		"\033[1m\033[37m"
# define NONE			"\033[0m"

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << VIOLET << "\nAdresse de la string en memoire :\n";
	std::cout << &brain << "\n" << NONE;
	std::cout << RED << "\nAdresse stockee dans stringPTR :\n";
	std::cout << stringPTR << "\n" << NONE;
	std::cout << "\nAdresse stockee dans stringREF : \n";
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << VIOLET << "\nValeur de la string :\n";
	std::cout << brain << "\n" << NONE;
	std::cout << RED << "\nValeur pointee par stringPTR :\n";
	std::cout << *stringPTR << "\n" << NONE;
	std::cout << "\nValeur pointee par stringREF : \n";
	std::cout << stringREF << std::endl;
	
	return (0);
}
