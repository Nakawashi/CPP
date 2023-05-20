/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:18:08 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/20 22:23:38 by nakawashi        ###   ########.fr       */
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
	if
	// constructor that creates an array of n elements of type T
}

template<typename T>
Array<T>::Array(const Array& src)
: _array_size(src._array_size), _array(new T[src._array_size])
{
	for (size_t i = 0; i < src._array_size; ++i)
	{
		this->_array[i] = src._array[i];
	}
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_array_size)
		delete[] this->_array;
}

template<typename T>
Array<T>::Array&	operator=(const Array& rhs)
{
	if (this == &rhs)
		return *this;
	if (this->_array_size > 0)
		delete[] this->_array;

	this->_array_size = rhs.size();
	this->_array = new T[this->_array_size];
	for (size_t i = 0; i < this->_array_size; ++i)
	{
		this->_array[i] = rhs._array[i];
	}
	return *this;
}

template<typename T>
unsigned int	size(void)
{
	return this->_array_size;
}

template<typename T>
std::ostream&	operator<<(std::ostream& stream, const Array<T>& rhs)
{
	for (size_t i = 0; i < rhs.size(); ++i)
	{
		stream << rhs[i] << "\n"
	}
	return stream;
}






#endif
