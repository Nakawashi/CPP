/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:53:02 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/25 14:01:23 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <iostream>
# include <string>
# include <ctime>		/* clock_t, clock() */
# include <list>
# include <vector>
# include "whatever.hpp"

class PmergeMe
{
public:
	PmergeMe(void);
	~PmergeMe(void);

	void								sort_list(std::list<int>& myContainer);
	void								sort_vector(std::vector<int>& myContainer);

private:
	PmergeMe(const PmergeMe& src);
	PmergeMe&							operator=(const PmergeMe& rhs);

	// LIST
	int									_findPairedElemList(std::list<std::pair<int, int> >& pairList, std::list<int>& mainList);
	void								_createPairsList(std::list<int>& myContainer);
	void								_binarySearchList(void);
	std::list<int>						_pendingList;
	std::list<int>						_mainList;
	std::list<std::pair<int, int> >		_pairList;
	// VECTOR
	int									_findPairedElemVector(std::vector<std::pair<int, int> >& pairVector, std::vector<int>& mainVector);
	void								_createPairsVector(std::vector<int>& myContainer);
	void								_binarySearchVector(void);
	std::vector<int>					_pendingVector;
	std::vector<int>					_mainVector;
	std::vector<std::pair<int, int> >	_pairVector;
};

//-----------------------------------------------------------------------------------------------------


template<typename T>
void	fillContainerWithNumbers(int n, T& container)
{
	if (n <= 0)
		throw std::runtime_error("\033[0;31mError [unsigned values]: numbers must be positive\033[0m");

	container.push_back(n);
}

template<typename T>
void	printContainer(T& container)
{
	typename T::iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template<typename T>
void	printPairs(const T& container)
{
	typename T::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		std::cout << "(" << it->first << ", " << it->second << ") ";
	}
	std::cout << std::endl;
}

#endif
