/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:56:04 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/23 22:34:37 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


//------------------------------------------------------------------------------

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}

void	PmergeMe::sort_list(std::list<int>& container)
{
	_createPairs(container);
}

/* void	PmergeMe::sort_vector(std::vector<int>& container)
{
	std::cout << "Function in progress" << std::endl;
	//this->sortingByPairs(container);
} */

/*
	Parameter:
	container with all valid numbers
	Description:
	creates pair list<int>. If container got odd numbers, the last is gonna fill the new list by default
	takes the bigger number from each pairs and fill _utilsList attribute
	Nous avons besoin de garder l'info de quels binômes vont ensembles, d'où la création des paires.
	So we get pair list and new list with biggest values from the pairs.
*/
void	PmergeMe::_createPairs(std::list<int>& container)
{
	int	first;
	int	second;

	for (std::list<int>::iterator it = container.begin(); it != container.end(); ++it)
	{
		if (std::next(it) != container.end())
		{
			first = *it;
			second = *std::next(it);
			if (first > second)
				swap(first, second); // (step 2 wikipedia, determine the larger of the two elements in each pair)
			_pairList.push_back(std::make_pair(first, second)); // (step 1 wikipedia, group the elements by two)
			_utilsList.push_back(second); //(step 3 wikipedia)
			++it;
		}
		else // si nombre impaire de valeurs dans la liste initiale
		{
			_utilsList.push_back(*it);
		}
	}
	_utilsList.sort(); //(step 3 wikipedia)
	_utilsList.push_front(_findPairedElem(_pairList, _utilsList)); //(step 4 wikipedia)
	

	std::cout << "Paires : " << std::endl;
	printPairs(_pairList);
	std::cout << "Seconde liste avec que les grands des paires et le solo si impair : " << std::endl;
	printContainer(_utilsList);
}

/*
	we search for the smallest of the group, which is an it->first for sure
	deletes the group in pairList
*/
int	PmergeMe::_findPairedElem(std::list<std::pair<int, int> >& pairList, std::list<int>& utilsList)
{
	std::list<std::pair<int, int> >::iterator	it_pair = pairList.begin();
	int											research = *utilsList.begin();
	int											result = -1;


	while (it_pair != pairList.end())
	{
		if (research == it_pair->second) // valeur retrouvée
		{
			result = it_pair->first;
			pairList.erase(it_pair);
			break ;
		}
		++it_pair;
	}
	return result;
}
