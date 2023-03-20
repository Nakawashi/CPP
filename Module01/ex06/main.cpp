#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Argument error\n[./HarlFilter] [level]\nLevels are : DEBUG, INFO, WARNING, ERROR" << NONE << std::endl;
		return 1;
	}
	Harl karen;

	karen.complain(argv[1]);

	return 0;
}
