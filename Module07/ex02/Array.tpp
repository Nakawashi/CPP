/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:18:08 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/20 21:45:17 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
: _array_size(0), _array(nullptr) { }

// _array(new T[n]) : alloue dynamiquement un tableau de type T de taille n
template<typename T>
Array<T>::Array(unsigned int n)
: _array_size(n), _array(new T[n])
{
	// constructor that creates an array of n elements of type T
}

template<typename T>
Array::Array(const Array& src)
: _array_size(src._array_size), _array(new T[src._array_size])
{
	for (size_t i = 0; i < _array_size; ++i)
	{
		this.
	}
}
