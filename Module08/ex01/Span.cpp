/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:04 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/30 12:09:13 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <random>

Span::Span(unsigned int max_n)
: _max_n(max_n), _stockage(max_n) { }

Span::Span(const Span& src)
: _stockage(src.getMaxN())
{
	for (size_t i = 0; i < src.getMaxN(); ++i)
	{
		this->_stockage[i] = src._stockage[i];
	}
}

Span::~Span(void)
{

}

void	Span::addNumber(void)
{
	if (this->_stockage.size() > this->getMaxN())
		throw Span::SpanFullException();

	std::random_device random;
	std::mt19937 rng(random());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(1,100);
	this->_stockage.push_back("here");
}

unsigned int	Span::getMaxN(void) const
{
	return this->_max_n;
}
