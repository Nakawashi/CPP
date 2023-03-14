#include "colors.hpp"
#include <iostream>	// std::cout
#include <fstream>	//std::ifstream

/*
	find() : returns the position of the first occurrence of s1 in str
	npos : si la sous-chaine cherchee n'est pas trouvee par find(), find() renvoie npos
*/
std::string	ft_find(std::string &str, std::string s1, std::string s2)
{
	size_t pos = 0;
	while ((pos = str.find(s1, pos)) != std::string::npos)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos += s2.length();
	}
	return (str);
}

/*
	input file stream : file is the input we read from
	output file stream : we create that given file
*/
int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << RED << "Arguments error \n";
		std::cout << "Usage: ./gnl2 [filename] [s1] [s2]\n";
		std::cout << "Where [s1] is going to be replaced by [s2] in a new [filename].replace" << NONE << std::endl;
		return (1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << RED << "Error: s1 or s2 is empty" << NONE << std::endl;
		return (1);
	}
	std::ifstream ifs(argv[1]);
	if (ifs.is_open()) // returns true if the file is open and associated with this stream object
	{
		std::string fileName = argv[1];
		std::string ifsToStr = "";
		std::ofstream ofs(fileName + ".replace");
		// utiliser getline comme dans phonebook pour convertir le stream en string, vu qu'on peut pas revenir en arriere dans le stream, comme le read de GNL
		while (std::getline(ifs, ifsToStr))
			ofs << ft_find(ifsToStr, s1, s2) << std::endl;

		ifs.close();
		ofs.close();
	}
	else
	{
		std::cout << RED << "Error ocured while opening file [" << argv[1] << "]. Please create a file with content." << NONE << std::endl;
		return (1);
	}
	return (0);
}
