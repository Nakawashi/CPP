/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:23:46 by nakawashi         #+#    #+#             */
/*   Updated: 2023/06/04 13:55:23 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> ms;

	ms.push(1);
	ms.push(2);
	ms.push(4);
	ms.push(8);
	ms.push(16);

	MutantStack<int>::iterator it;

	for (it = ms.begin(); it != ms.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}
