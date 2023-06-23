/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:53:02 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/23 17:15:08 by nakawashi        ###   ########.fr       */
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
# include "colors.hpp"

class PmergeMe
{
public:
	PmergeMe(void);
	~PmergeMe(void);

	void	sort_list(std::list<int>& container);
	void	sort_vector(std::vector<int>& container);

private:
	PmergeMe(const PmergeMe& src);
	PmergeMe&	operator=(const PmergeMe& rhs);

	template<typename T>
	T&	sortingByPairs(T& container)
	{
		typename T::iterator			it;
		std::list<std::pair<int, int> >	pairs;

		// MAKE PAIRS
		for (it = container.begin(); it != container.end(); ++it)
		{
			if (std::next(it) != container.end())
				pairs.push_back(std::make_pair(*it, *std::next(it)));
			else
				pairs.push_back(std::make_pair(*it, *it)); // si impair, créer une pair avec lui même
		}

		// SORT PAIRS
		std::list<std::pair<int, int> >::iterator pit;
		for (pit = pairs.begin(); pit != pairs.end(); ++it)
		{
			std::pair<int, int>&	pair = *it;
			if (pair.first > pair.second)
				std::swap(pair.first, pair.second);
		}

	}
};


template<typename T>
void	InsertNumbersInContainer(int n, T& container)
{
	if (n <= 0)
		throw std::runtime_error("\033[0;31mError [unsigned values]: numbers must be positive\033[0m");

	container.push_back(n);
}

template<typename T>
void	printContainer(T& container)
{
	typename T::iterator it;
	std::cout << "Impression du contenu du container : " << std::endl;
	for (it = container.begin(); it != container.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

#endif
