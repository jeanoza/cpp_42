/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/14 09:16:35 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int ac, char **av) {
	(void)ac;
	(void)av;

	int test_i[5] = {4, 42, 0, -1, 2};

	std::list<int> test_l;
	std::vector<int> test_v;

	/* push value in each container */
	for(int i = 0; i < 5; ++i) {
		test_l.push_back(test_i[i]);
		test_v.push_back(test_i[i]);
	}


	/* correct value */
	std::cout << CYN << "\n\n[ TEST: correct correct ]" << DFT << std::endl;
	try {
		std::cout << "list<int>: " <<  findeasy(test_l, 42)<< std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}
	try {
		std::cout << "vector<int>: " <<  findeasy(test_v, 42)<< std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}


	/* not found value */
	std::cout << YEL << "\n\n[ TEST: not found value ]" << DFT << std::endl;
	try {
		std::cout << "list<int>: " <<  findeasy(test_l, 43)<< std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}
	try {
		std::cout << "vector<int>: " <<  findeasy(test_v, 43)<< std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}
}