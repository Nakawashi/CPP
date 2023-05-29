/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:04:07 by lgenevey          #+#    #+#             */
/*   Updated: 2023/05/29 23:42:28 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>

/*
	typename : informs the compilator that T::iterator is a type
*/
template<typename T>
typename T::iterator	easyfind(T &container, int what)
{
	for (typename T::iterator it = container.begin(); it != container.end(); ++it)
	{
		if (*it == what)
			return it;
	}
	return container.end();
}

#endif
