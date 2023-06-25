/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:34:30 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/25 15:28:06 by lgenevey         ###   ########.fr       */
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

// `jot -r 3000 1 1000 | tr '\n' ' '`
// a tester ./PmergeMe 50 10 98 54 40 36 45 32 12 78 98 5 45 24 1
#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{

	std::list<int>		lisa;
	std::vector<int>	victor;
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
			if (std::find(lisa.begin(), lisa.end(), number) != lisa.end()) //list.unique() but found after
				continue ;
			if (std::find(victor.begin(), victor.end(), number) != victor.end())
				continue ;
			fillContainerWithNumbers(number, lisa);
			fillContainerWithNumbers(number, victor);
		}

		PmergeMe	mergesorter;

		// LIST -----------------------------------------------------------
		mergesorter.sort_list(lisa);
		// VECTOR ---------------------------------------------------------
		mergesorter.sort_vector(victor);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
/*
b3 comparer a b1
b3 comp a2

*/
