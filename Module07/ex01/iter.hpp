/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:58:07 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/21 17:30:58 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T, typename Function>
void	iter(const T* array, int size, Function func)
{
	for (int i = 0; i < size; ++i)
	{
		func(array[i]);
	}
}

#endif
