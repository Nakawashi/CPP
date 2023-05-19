/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:53:57 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/19 23:37:29 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#define SIZE 5

template<typename T>
void	super_print(const T& input)
{
	std::cout << input << std::endl;
}


template<typename T>
void	swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
bool compare(const T& a, const T& b)
{
	return a > b;
}

template<typename T>
void	super_sort(T& array)
{
	for (size_t i = 0; i < SIZE - 1; ++i)
	{
		for (size_t j = 0; j < SIZE - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}
		}

	}
}

int	main(void)
{
	int		intArray[SIZE] = {0, 150, -28, 42, 74};
	//float	fltArray[5] = {35.2f, 10.5f, -88.25f, 5.5f, 42.42f};

	iter(intArray, 5, super_sort<int>);
	iter(intArray, 5, super_print<int>);

	return 0;
}
