/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 23:07:52 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/15 23:10:39 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// convert ptr into uintptr_t --> general (it's like void*)
uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

// convert uintptr_t raw into Data pointer --> specific
Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
