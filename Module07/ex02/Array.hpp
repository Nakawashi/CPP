/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:34:12 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/20 21:42:41 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T = int> // what the array contains could be anything
class Array
{
public:
	Array(void);
	Array(unsigned int n);
	Array(const Array& src);
	~Array(void);

	Array&			operator=(const Array& rhs);
	T&				operator[](unsigned int index);

	unsigned int	size(void) const; // returns nb of element in the array object

	class InvalidIndexException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

private:
	T*				_array;
	unsigned int	_array_size;
};

template<typename T>
std::ostream&		operator<<(std::ostream& stream, const Array<T>& rhs);

#endif
