/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:04 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/30 12:49:34 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <random>
#include <algorithm>

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

Span::~Span(void) { }

/*
	std::random_device random;
		cree un generateur de nombres aléatoires basé sur du hardware ou source systeme.
	std::mt19937 rng(random());
		cree un generateur de nombres aléatoires basé sur l'algo Mersenne Twister.
	std::uniform_int_distribution<std::mt19937::result_type> dist6(-50, 50);
		créé une distribution uniforme d'entiers dans la plage donnée.
*/
void	Span::addNumber(void)
{
	if (this->_stockage.size() > this->getMaxN())
		throw Span::SpanFullException();

	std::random_device random;
	std::mt19937 rng(random());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(-50, 50);
	unsigned int randomNumber = dist6(rng);
	this->_stockage.push_back(randomNumber);
}

void	Span::shortestSpan(void) const
{
	if (this->_stockage.size() == 0)
		throw Span::SpanEmptyException();
	if (this->_stockage.size() == 1)
		throw Span::SpanDistanceException();



}

/* void	Span::longestSpan(void) const
{
	if (this->_stockage.size() == 0)
		throw Span::SpanEmptyException();
	if (this->_stockage.size() == 1)
		throw Span::SpanDistanceException();

	unsigned int	shortest;
	unsigned int	span;

	std::sort(this->_stockage.begin(), this->_stockage.end());
	shortest = std::abs(this->_stockage[0] - this->_stockage[1]);

	for (size_t i = 1; this->_stockage.size() - 1; ++i)
	{
		span = std::abs(this->_stockage[i] - this->_stockage[i + 1]);
		shortest = std::min(shortest, span);
	}
} */

const char*	Span::SpanFullException::what() const throw()
{
		return "Vector already full, can't add new entry";
}

const char*	Span::SpanEmptyException::what() const throw()
{
		return "Vector empty";
}

const char*	Span::SpanDistanceException::what() const throw()
{
		return "Not enough elements to compare";
}

unsigned int	Span::getMaxN(void) const
{
	return this->_max_n;
}
