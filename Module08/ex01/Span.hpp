/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:21:46 by nakawashi         #+#    #+#             */
/*   Updated: 2023/06/03 18:24:39 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>

class Span
{
public:
	Span(unsigned int max_n);
	Span(const Span& src);
	~Span(void);

	Span&				operator=(const Span& rhs);
	unsigned int		getMaxN(void) const;
	std::vector<int>&	getStockage(void);
	void				printVector(void) const;
	void				addRandomNumbers(void);
	void				addNumber(int n);
	void				addNumberIter(std::vector<int>::iterator start, std::vector<int>::iterator end);
	int					shortestSpan(void) const;
	int					longestSpan(void) const;

	class SpanFullException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class SpanEmptyException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class SpanDistanceException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class NegativeParamException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

private:
	Span(void); // impossible to create a new object without given parameter
	unsigned int		_max_n;
	std::vector<int>	_stockage;
};

#endif
