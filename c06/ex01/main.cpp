/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/10 12:49:24 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main(int ac, char **av) {
	(void)ac;
	(void)av;

	std::cout << "/ * Test serialize / deserialize * /" << std::endl;
	
	Data		_data = { .raw = 42 };
	uintptr_t	_uintptr = serialize(&_data);
	Data 		*_data_ptr = deserialize(_uintptr);

	std::cout << CYN << "_data.raw:	" << _data.raw << " (_data: " << &_data << ")" << DFT << std::endl;
	std::cout << GRN << "_data_ptr->raw:	" << _data_ptr->raw << " (_data_ptr:" << _data_ptr << ")" << DFT << std::endl;
}
