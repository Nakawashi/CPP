/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:18:08 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/23 13:41:36 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
Array<T>::Array(void)
: _array(nullptr), _size(0) { }

// _array(new T[n]) : alloue dynamiquement un tableau de type T de taille n
template<typename T>
Array<T>::Array(unsigned int n)
: _array(new T[n]), _size(n)
{
	if (this->_size < 1)
		throw InvalidIndexException();
}

template<typename T>
Array<T>::Array(const Array& src)
: _array(new T[src._size]), _size(src._size)
{
	for (size_t i = 0; i < src._size; ++i)
	{
		this->_array[i] = src._array[i];
	}
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_size)
		delete[] this->_array;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array& rhs)
{
	if (this == &rhs)
		return *this;
	if (this->_size > 0)
		delete[] this->_array;

	this->_size = rhs.size();
	this->_array = new T[this->_size];

	for (size_t i = 0; i < this->_size; ++i)
		this->_array[i] = rhs._array[i];

	return *this;
}

template<typename T>
T&	Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw Array<T>::InvalidIndexException();

	return this->_array[index];
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return this->_size;
}

template<typename T>
std::ostream&	operator<<(std::ostream& stream, Array<T> &rhs)
{
	for (size_t i = 0; i < rhs.size(); ++i)
	{
		stream << i << " - " << rhs[i] << "\n";
	}
	return stream;
}

template<typename T>
const char* Array<T>::InvalidIndexException::what() const throw()
{
	return "Invalid array's index";
}
