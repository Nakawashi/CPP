/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:58:07 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/19 21:53:45 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T, typename Function>
void	iter(T& array, size_t size, Function func)
{
	for (size_t i = 0; i < size; ++i)
	{
		func(array[i]);
	}
}

#endif
