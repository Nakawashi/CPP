/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:04 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/30 14:38:42 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <random>
#include <algorithm>

//------

unsigned int	my_abs(int a)
{
	if (a < 0)
	{
		int tmp = a * -1;
		return static_cast<unsigned int>(tmp);
	}
	return static_cast<unsigned int>(a);
}

//-------

Span::Span(unsigned int max_n)
: _max_n(max_n), _stockage(max_n) { }

Span::Span(const Span& src)
: _max_n(src.getMaxN()), _stockage(src._stockage)
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
	std::uniform_int_distribution<std::mt19937::result_type> dist6(-50, 50); -- warning signed numbers
		créé une distribution uniforme d'entiers dans la plage donnée.
*/
void	Span::addNumber(void)
{
	if (this->_stockage.size() > this->getMaxN())
		throw Span::SpanFullException();

	std::random_device random;
	std::mt19937 rng(random());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(0, 100);
	unsigned int randomNumber = dist6(rng);
	this->_stockage.push_back(randomNumber);
}

/* unsigned int	Span::shortestSpan(void) const
{
	if (this->_stockage.size() == 0)
		throw Span::SpanEmptyException();
	if (this->_stockage.size() == 1)
		throw Span::SpanDistanceException();

	unsigned int	shortest;
	unsigned int	span;

	std::sort(this->_stockage.begin(), this->_stockage.end());
	shortest = my_abs(this->_stockage[0] - this->_stockage[1]);

	for (size_t i = 1; this->_stockage.size() - 1; ++i)
	{
		span = my_abs(this->_stockage[i] - this->_stockage[i + 1]);
		shortest = std::min(shortest, span);
	}
	return shortest;
} */

/* void	Span::longestSpan(void) const
{
	if (this->_stockage.size() == 0)
		throw Span::SpanEmptyException();
	if (this->_stockage.size() == 1)
		throw Span::SpanDistanceException();

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


