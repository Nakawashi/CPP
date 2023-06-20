/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:34:30 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/20 19:58:47 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	INPUT
		only positive numbers

	ALGO
		merge-insert sort / Ford Johnson algo
		list : splice
		list.splice(insertion, list, it) :: insersion = position de l'insertion, list = container d'ou vient l'it, it = l'element qu'on insert

*/

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

#include <iostream>
#include <ctime>		/* clock_t, clock() */
#include <list>
#include <vector>
#include "PmergeMe.hpp"
#include "colors.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout
			<< RED
			<< "Error : Invalid number of arguments"
			<< NONE
			<< std::endl;
		return 1;
	}

	// MANAGE ONE OR MANY ARGUMENTS
	std::string	av(argv[1]);
	int	i = 2;
	while (argv[i])
	{
		av += ' ';
		av += argv[i];
		++i;
	}

	argValidation(av);
	// std::list<unsigned int> list;
	return 0;
}
