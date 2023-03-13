#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	if (argc < 4)
	{
		std::cout << "Error: make a function for good usage of arguments" << std::endl;
		return (1);
	}

	// std::ifstream ifs(argv[1]); // ifs : input file stream
	std::ifstream ifs("test1"); // ifs : input file stream
	ifs.is_open(); // check if the file is open or exists
	// utiliser getline comme dans phonebook pour convertir le stream en string, vu qu'on peut pas revenir en arriere dans le stream, comme le read de GNL

	// convertir ifs en string pour utiliser les fonctions de string, via getline()

	// std::string s1 = argv[2];
	std::string s1 = "";
	// std::string s2 = argv[3];
	std::string s2 = "";

	ifs >> s1 >> s2;

	std::cout << s1 << " " << s2 << std::endl;
	ifs.close();

	std::ofstream ofs("test2");
	ofs << "ce que je mets dans le fichier" << std::endl;
	ofs.close();


	return (0);
}
