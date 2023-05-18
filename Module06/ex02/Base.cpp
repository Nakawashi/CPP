/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:17:16 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/18 16:40:33 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	// Explicit cast needed because of the lost of precision. time() returns a t_time witch is a long, larger than unsigned int.
	srand(static_cast<unsigned int>(time(nullptr)));
	int	random = rand() % 3;
	std::cout << random << std::endl;

	switch (random)
	{
		case 0:
			return new A;
			break ;
		case 1:
			return new B;
			break ;
		case 3:
			return new C;
			break ;
		default:
			return NULL;
	}
}

void	identify(Base* p)
{

}

void	identify(Base& p);
