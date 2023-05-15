/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 23:11:51 by nakawashi         #+#    #+#             */
/*   Updated: 2023/05/15 23:30:44 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

int	main(void)
{
	{
		uintptr_t	serialized_data;
		Data 		data_start;
		Data* 		data_end;

		data_start.value = 42;
		data_start.value_ptr = &data_start.value;

		std::cout << "\ndata_start\t: " << data_start.value << std::endl;
		std::cout << "address\t\t: " << data_start.value_ptr << std::endl;

		serialized_data = serialize(&data_start);

		std::cout << "\nserialized_data\t: " << serialized_data << std::endl;
		std::cout << "address\t\t: " << &serialized_data << std::endl;

		data_end = deserialize(serialized_data);

		std::cout << "\ndata_end\t: " << data_end->value << std::endl;
		std::cout << "address\t\t: " << data_end->value_ptr << std::endl;
	}

		std::cout << "**************************************" << std::endl;

	{
		uintptr_t	serialized_data;
		Data* 		data_start = new Data();
		Data* 		data_end = new Data();

		data_start->value = 42;
		data_start->value_ptr = &data_start->value;

		std::cout << "\ndata_start\t: " << data_start->value << std::endl;
		std::cout << "address\t\t: " << data_start->value_ptr << std::endl;

		serialized_data = serialize(data_start);

		std::cout << "\nserialized_data\t: " << serialized_data << std::endl;
		std::cout << "address\t\t: " << &serialized_data << std::endl;

		data_end = deserialize(serialized_data);

		std::cout << "\ndata_end\t: " << data_end->value << std::endl;
		std::cout << "address\t\t: " << data_end->value_ptr << std::endl;
	}
	return 0;
}
