/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:56:04 by lgenevey          #+#    #+#             */
/*   Updated: 2023/06/23 16:49:19 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


//------------------------------------------------------------------------------

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}

void	PmergeMe::sort_list(std::list<int>& container)
{
	this->sortingByPairs(container);
}

void	PmergeMe::sort_vector(std::vector<int>& container)
{
	this->sortingByPairs(container);
}

