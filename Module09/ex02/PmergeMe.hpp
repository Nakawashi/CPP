/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:53:02 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/23 15:54:15 by nakawashi        ###   ########.fr       */
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

private:
	PmergeMe(const PmergeMe& src);
	PmergeMe&	operator=(const PmergeMe& rhs);

	//template<typename T>
	//void	sort(T& datas, int start, int end)
	//{

	//}

};


template<typename T>
void	insertPositivesNumbersInContainer(int n, T& container)
{
	if (n <= 0)
	{
		throw std::runtime_error("\033[0;31mInvalid value: numbers must be positives\033[0m");
	}
	container.push_back(n);
}

template<typename T>
void	printContainer(T& container)
{
	typename T::iterator it;
	std::cout << "Impression du contenu du container : " << std::endl;
	for (it = container.begin(); it != container.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}



#endif
