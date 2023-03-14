#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string str = "";

	if (argc < 4)
	{
		std::cout << "Error: make a function for good usage of arguments" << std::endl;
		return (1);
	}

	std::ifstream ifs(argv[1]); // ifs : input file stream
	if (ifs.is_open()) // returns true if the file is open and associated with this stream object
	{
		// utiliser getline comme dans phonebook pour convertir le stream en string, vu qu'on peut pas revenir en arriere dans le stream, comme le read de GNL
		std::getline(ifs, str);
		std::cout << str << std::endl;
		ifs.close();
	}
	else
	{
		std::cout << "File " << argv[1] << " does not exists, or error occured." << std::endl;
		return (1);
	}

	return (0);
}
