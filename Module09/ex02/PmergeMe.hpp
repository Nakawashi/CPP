/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:53:02 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/23 22:18:04 by nakawashi        ###   ########.fr       */
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

	void				sort_list(std::list<int>& container);
	void				sort_vector(std::vector<int>& container);

private:
	PmergeMe(const PmergeMe& src);
	PmergeMe&			operator=(const PmergeMe& rhs);

	int								_findPairedElem(std::list<std::pair<int, int> >& pairList, std::list<int>& utilsList);
	void							_createPairs(std::list<int>& container);
	std::list<int>					_utilsList;
	std::list<std::pair<int, int> >	_pairList;
	std::vector<int>				_utilsVector;
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
