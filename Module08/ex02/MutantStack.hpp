/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:24:20 by nakawashi         #+#    #+#             */
/*   Updated: 2023/06/04 14:00:45 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>(void) {}
	MutantStack(const MutantStack& src) : std::stack<T>(src) {}
	virtual ~MutantStack(void);

	MutantStack&	operator=(const MutantStack& rhs)
	{
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;				// iterator type and constructor's element's type must match
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;	// iterator type and constructor's element's type must match

	iterator	begin()
	{
		return std::stack<T>::c.begin();
	}

	iterator	end()
	{
		return std::stack<T>::c.end();
	}

	const_iterator	begin() const
	{
		return std::stack<T>::c.begin();
	}

	const_iterator	end() const
	{
		return std::stack<T>::c.end();
	}
};

#endif
