/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:05:49 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/23 14:00:28 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Awesome.hpp"

int main(void)
{
	{
		Array<int>	notes;
		Array<int>	notes_bis;
		Array<int>	notes_bis_bis;

		std::cout << "\nTests: operators =, [], <<" << std::endl;
		notes = Array<int>(10);
		for (unsigned int i = 0; i < notes.size(); ++i)
		{
			if (i % 2 == 0)
				notes[i] = 3;
			else
				notes[i] = 42;
		}
		std::cout << "notes : \n" << notes << std::endl;

		notes_bis = notes;
		std::cout << "notes_bis : \n" << notes_bis << std::endl;

		notes_bis_bis = Array<int>(10);
		for (unsigned int i = 0; i < notes_bis_bis.size(); ++i)
		{
			if (i % 2 == 0)
				notes_bis_bis[i] = 10;
			else
				notes_bis_bis[i] = 15;
		}
		std::cout << "notes_bis_bis : \n" << notes_bis_bis << std::endl;

		notes_bis_bis = notes;
		std::cout << "notes_bis_bis : \n" << notes_bis_bis << std::endl;
	}

	std::cout << "***********************************" << std::endl;

	{
		Array<Awesome> yes = Array<Awesome>(5);

		std::cout << "\nDisplay Awesome : " << yes << std::endl;
	}

	std::cout << "***********************************" << std::endl;

	{
		std::cout << "\nTests: InvalidIndexException\n" << std::endl;
		// modifier les valeurs pour faire les differents tests
		Array<int>	test = Array<int>(-10); // taille tableau impossible
		for (unsigned int i = 0; i < test.size(); ++i)
		{
				test[test.size()] = 3; // index inaccessible
		}
	}




	return 0;
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];

//     srand(time(NULL));

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0; // <----------------- impossible value
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0; // <----------------- inaccessible index
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
