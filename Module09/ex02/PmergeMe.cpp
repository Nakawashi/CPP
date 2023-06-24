/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:56:04 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/24 21:05:00 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


//------------------------------------------------------------------------------

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}

void	PmergeMe::sort_list(std::list<int>& container)
{
	std::cout << "Avant : " << std::endl;
	printContainer(container);
	_createPairs(container);
	_binarySearch();
}

/*
	Parameter:
	container with all valid numbers
	Description:
	creates pair list<int>. If container got odd numbers, the last is gonna fill the new list by default
	takes the bigger number from each pairs and fill _mainList attribute.
	Nous avons besoin de garder l'info de quels binômes vont ensembles, d'où la création des paires.
	So we get pair list and new list with biggest values from each pairs.
*/
void	PmergeMe::_createPairs(std::list<int>& container)
{
	int	first;
	int	second;
	std::list<int>::iterator it;

	_pendingList = container;
	for (it = _pendingList.begin(); it != _pendingList.end(); ++it)
	{
		if (std::next(it) != _pendingList.end())
		{
			first = *it;
			second = *std::next(it);
			if (first > second)
				swap(first, second); // (step 2 wikipedia, determine the larger of the two elements in each pair)
			_pairList.push_back(std::make_pair(first, second)); // (step 1 wikipedia, group the elements by two)
			_mainList.push_back(second); //(step 3 wikipedia)
			++it;
		}
		else
		{
			_mainList.push_back(*it);
		}
	}
	_mainList.sort(); //(step 3 wikipedia)

	std::cout << "Paires : " << std::endl;
	printPairs(_pairList);

	_mainList.push_front(_findPairedElem(_pairList, _mainList)); //(step 4 wikipedia)


	std::cout << "Seconde liste avec que les grands des paires et le solo si impair : " << std::endl;
	printContainer(_mainList);
}

/*
	we search for the smallest of the group, which is an it->first for sure
	deletes the group in pairList
*/
int	PmergeMe::_findPairedElem(std::list<std::pair<int, int> >& pairList, std::list<int>& secondList)
{
	std::list<std::pair<int, int> >::iterator	itPair = pairList.begin();
	int											research = *secondList.begin();
	int											result = -1;

	while (itPair != pairList.end())
	{
		if (research == itPair->second) // valeur retrouvée
		{
			result = itPair->first;
			pairList.erase(itPair);
			break ;
		}
		++itPair;
	}
	return result;
}


void	PmergeMe::_binarySearch(void)
{
	std::list<std::pair<int, int> >::iterator	itPair;
	std::list<int>::iterator 					itPos;
	std::list<int>::iterator 					itFirst;

	for (itPair = _pairList.begin(); itPair != _pairList.end(); ++itPair)
	{
		itPos = lower_bound(_mainList.begin(), _mainList.end(), itPair->second);
		_mainList.insert(itPos, itPair->first); // inserer la petite valeur juste avant son binome
		--itPos;
		--itPos;
		while (itPos != _mainList.begin())
		{
			if (itPair->first > *itPos) // comparer valeur du binome avec element precedent de _mainList
				--itPos;
		}
		itFirst = std::find(_mainList.begin(), _mainList.end(), itPair->first);
		_mainList.splice(itPos, _mainList, itFirst);

		// std::cout << "itPair->first : " << itPair->first << std::endl;
		// std::cout << "itPair->second : " << itPair->second << std::endl;
		// std::cout << "print lst: " << std::endl;
		// printContainer(_mainList);

	}
	std::cout << "Seconde liste apres insert(lower_bound) : " << std::endl;
	printContainer(_mainList);
}
/* void	PmergeMe::sort_vector(std::vector<int>& container)
{
	std::cout << "Function in progress" << std::endl;
	//this->sortingByPairs(container);
} */
