#include <iostream>

#define MAX_ARGS 10


int	main(int argc, char** argv)
{
	if (argc > MAX_ARGS)
	{
		std::cout << "9 values (args) maximum" << std::endl;
		return 0;
	}

	return 0;
}