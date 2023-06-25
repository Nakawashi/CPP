/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:56:04 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/25 14:04:45 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


//------------------------------------------------------------------------------

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}

void	PmergeMe::sort_list(std::list<int>& myContainer)
{
	std::cout << "Avant : " << std::endl;
	printContainer(myContainer);
	_createPairsList(myContainer);
	_binarySearchList();
}

void	PmergeMe::sort_vector(std::vector<int>& myContainer)
{
	std::cout << "Avant : " << std::endl;
	printContainer(myContainer);
	_createPairsVector(myContainer);
	_binarySearchVector();
}


////
///
// LIST

/*
	Parameter:
	container with all valid numbers
	Description:
	creates pair list<int>. If container got odd numbers, the last is gonna fill the new list by default
	takes the bigger number from each pairs and fill _mainList attribute.
	Nous avons besoin de garder l'info de quels binômes vont ensembles, d'où la création des paires.
	So we get pair list and new list with biggest values from each pairs.
*/
void	PmergeMe::_createPairsList(std::list<int>& myContainer)
{
	int							first;
	int							second;
	std::list<int>::iterator	it;

	_pendingList = myContainer;
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

	if (_pendingList.size() % 2 == 0)
		_mainList.push_front(_findPairedElemList(_pairList, _mainList)); //(step 4 wikipedia)
}

/*
	we search for the smallest of the group, which is an it->first for sure
	deletes the group in pairList
*/
int	PmergeMe::_findPairedElemList(std::list<std::pair<int, int> >& pairList, std::list<int>& mainList)
{
	std::list<std::pair<int, int> >::iterator	itPair = pairList.begin();
	int											research = *mainList.begin();
	int											result = -1;

	while (itPair != pairList.end())
	{
		if (research == itPair->second)
		{
			result = itPair->first;
			pairList.erase(itPair);
			break ;
		}
		++itPair;
	}
	return result;
}

void	PmergeMe::_binarySearchList(void)
{
	std::list<std::pair<int, int> >::iterator	itPair;
	std::list<int>::iterator 					itPos;

	for (itPair = _pairList.begin(); itPair != _pairList.end(); ++itPair)
	{
		itPos = lower_bound(_mainList.begin(), _mainList.end(), itPair->first); //cherche le bon emplacement
		_mainList.insert(itPos, itPair->first); // inserer au bon endroit
	}
}


////
///
// VECTOR

void	PmergeMe::_createPairsVector(std::vector<int>& myContainer)
{
	int							first;
	int							second;
	std::vector<int>::iterator	it;

	_pendingVector = myContainer;
	for (it = _pendingVector.begin(); it != _pendingVector.end(); ++it)
	{
		if (std::next(it) != _pendingVector.end())
		{
			first = *it;
			second = *std::next(it);
			if (first > second)
				swap(first, second); // (step 2 wikipedia, determine the larger of the two elements in each pair)
			_pairVector.push_back(std::make_pair(first, second)); // (step 1 wikipedia, group the elements by two)
			_mainVector.push_back(second); //(step 3 wikipedia)
			++it;
		}
		else
		{
			_mainVector.push_back(*it);
		}
	}

	std::sort(_mainList.begin(), _mainList.end()); //(step 3 wikipedia)

	if (_pendingList.size() % 2 == 0)
		_mainVector.insert(_mainVector.begin(), _findPairedElemVector(_pairVector, _mainVector)) //(step 4 wikipedia)
}

/*
	we search for the smallest of the group, which is an it->first for sure
	deletes the group in pairList
*/
int	PmergeMe::_findPairedElemVector(std::vector<std::pair<int, int> >& pairVector, std::vector<int>& mainVector)
{
	std::vector<std::pair<int, int> >::iterator	itPair = pairVector.begin();
	int											research = *mainVector.begin();
	int											result = -1;

	while (itPair != pairVector.end())
	{
		if (research == itPair->second)
		{
			result = itPair->first;
			pairVector.erase(itPair);
			break ;
		}
		++itPair;
	}
	return result;
}

void	PmergeMe::_binarySearchVector(void)
{
	std::vector<std::pair<int, int> >::iterator	itPair;
	std::vector<int>::iterator 					itPos;

	for (itPair = _pairVector.begin(); itPair != _pairVector.end(); ++itPair)
	{
		itPos = lower_bound(_mainVector.begin(), _mainVector.end(), itPair->first); //cherche le bon emplacement
		_mainVector.insert(itPos, itPair->first); // inserer au bon endroit
	}
}

