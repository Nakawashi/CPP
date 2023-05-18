/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:55:26 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/18 16:32:08 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
	public:
		virtual ~Base(void);

};

// Creates and return a pointer on instance of A, B or C randomly
Base*	generate(void);
// Display the real type of the instance in parameter (pointer)
void	identify(Base* p);
// Display the real type of the instance in parameter (reference)
void	identify(Base& p);

#endif
