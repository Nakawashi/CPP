/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:58:07 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/23 12:55:16 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

// OTHER WAY BUT PROBLEM
// template<typename T, typename Function>
// void	iter(const T* array, int size, Function func)
// {
// 	for (int i = 0; i < size; ++i)
// 	{
// 		func(array[i]);
// 	}
// }
// main.cpp:32:2: error: no matching function for call to 'iter'
//         iter(intArray, SIZE, super_print);
//         ^~~~
// ./iter.hpp:20:6: note: candidate template ignored: couldn't infer template argument 'Function'
// void    iter(const T* array, int size, Function func)

template<typename T>
void	iter(T* array, size_t size, void (*function)(const T &))
{
	for (size_t i = 0; i < size; ++i)
	{
		function(array[i]);
	}
}

#endif
