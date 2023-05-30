/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:21:48 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/30 14:51:41 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template<typename T>
void	super_print(const T& input)
{
	std::cout << input << std::endl;
}

int	main(void)
{
	Span v(5);
	std::cout << "get max N : " << v.getMaxN() << std::endl;
	v.addNumber();
	v.addNumber();
	v.addNumber();
	v.addNumber();
	v.addNumber();
	super_print(v);
	return 0;
}
