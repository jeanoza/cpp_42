/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/11 15:05:14 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(int ac, char **av) {
	(void)ac;
	(void)av;

	int array[TEST_SIZE] = {1, 2, 3, 4, 5};
	float array_f[TEST_SIZE] = {0.1, -0.1, 0, 42, -42.0f};

	std::cout << CYN << "\n[ TEST int array ]\n" << DFT;
	::iter(array, TEST_SIZE, print);
	std::cout << CYN << "\n[ TEST float array ]\n" << DFT;
	::iter(array_f, TEST_SIZE, print);

	return 0;
}
