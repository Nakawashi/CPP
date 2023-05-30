/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:04 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/30 23:27:22 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <random>
#include <algorithm>	// sort(), min()

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
: _max_n(max_n), _stockage(0) { }

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
void	Span::addRandomNumber(void)
{
	if (this->_stockage.size() >= this->getMaxN())
		throw Span::SpanFullException();

	std::random_device random;
	std::mt19937 rng(random());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(0, 100);
	unsigned int randomNumber = dist6(rng);
	this->_stockage.push_back(randomNumber);
}

void	Span::addNumber(int n)
{
	if (this->_stockage.size() >= this->getMaxN())
		throw Span::SpanFullException();
	this->_stockage.push_back(n);
}

/*
	accumulate : additionne tous les éléments du vecteur
*/
unsigned int	Span::shortestSpan(void) const
{
	if (this->_stockage.size() == 0)
		throw Span::SpanEmptyException();
	if (this->_stockage.size() == 1)
		throw Span::SpanDistanceException();

	int	min = INT_MAX;
	int	tmp;

	for (size_t i = 0; i < this->_stockage.size() - 1; ++i)
	{
		tmp = my_abs(this->_stockage[i] - this->_stockage[i + 1]);
		if (tmp == 0)
			return 0;
		if (tmp < min)
			min = tmp;
	}
	
	return min;
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_stockage.empty())
		throw Span::SpanEmptyException();
	if (this->_stockage.size() == 1)
		throw Span::SpanDistanceException();

	std::vector<unsigned int> sorted = this->_stockage;
	std::sort(sorted.begin(), sorted.end());
	unsigned int diff = sorted.back() - sorted.front();

	std::cout << sorted.back() << " - " << sorted.front() << " = ";

	return diff;
}

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

void	Span::printVector(void) const
{
	if (this->_stockage.empty())
		return ;

	for (size_t i = 0; i < this->getMaxN(); ++i)
	{
		std::cout << i << " : " << this->_stockage[i] << std::endl;
	}
}
