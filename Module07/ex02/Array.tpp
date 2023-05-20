/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:18:08 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/20 21:25:33 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
: _array_size(0), _element(nullptr)
{
	// default constructor
}

// _array(new T[n]) : alloue dynamiquement un tableau de type T de taille n
template<typename T>
Array<T>::Array(unsigned int n)
: _array_size(n), _element(new T[n])
{
	// constructor that creates an array of n elements
}

template<typename T>
Array::Array(const Array& src)
: _array
{

}

#endif
