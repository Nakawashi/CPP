/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 22:53:15 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/15 23:11:30 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <inttypes.h>

struct Data {
	int		value;
	int*	value_ptr;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);
