/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:25:01 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/19 20:29:12 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T&	min(T& a, T& b)
{
	if (a < b)
		return a;
	else
		return b;
}

template<typename T>
T&	max(T& a, T& b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif
