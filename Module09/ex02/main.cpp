/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:34:30 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/23 17:30:32 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	WHY LIST (liste doublement chainee)
	Compared to other base standard sequence containers (array, vector and deque),
	lists perform generally better in inserting, extracting and moving elements in
	any position within the container for which an iterator has already been obtained,
	and therefore also in algorithms that make intensive use of these, like sorting algorithms.

	WHY NOT DEQUE INSTEAD
	For operations that involve frequent insertion or removals of elements at
	positions other than the beginning or the end, deques perform worse and have
	less consistent iterators and references than lists and forward lists.

	WHY VECTOR
	Compared to the other dynamic sequence containers (deques, lists and forward_lists),
	vectors are very efficient accessing its elements (just like arrays) and
	relatively efficient adding or removing elements from its end.
	For operations that involve inserting or removing elements at positions other
	 than the end, they perform worse than the others, and have less consistent
	 iterators and references than lists and forward_lists.
*/

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{

	std::list<int>		list;
	std::vector<int>	vector;
	int					number;
	int					prev;

	try
	{
		if (argc < 3)
			throw std::runtime_error("\033[0;31m Error [arguments]: you must enter at least 2 positives numbers\033[0m");

		for (int i = 1; i < argc; ++i)
		{
			number = std::atoi(argv[i]);
			prev = std::atoi(argv[i - 1]);
			if (number == prev)
				continue ;
			if (std::find(list.begin(), list.end(), number) != list.end())
				continue ;
			if (std::find(vector.begin(), vector.end(), number) != vector.end())
				continue ;
			InsertNumbersInContainer(number, list);
			InsertNumbersInContainer(number, vector);
		}

		PmergeMe	mergesorter;

		std::cout << "Avant : " << std::endl;

		printContainer(list);
		printContainer(vector);

		mergesorter.sort_list(list);
		mergesorter.sort_vector(vector);

		std::cout << "Après : " << std::endl;
		printContainer(list);
		printContainer(vector);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
