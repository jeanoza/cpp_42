/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/11 11:43:11 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Test { };

int main(int ac, char **av) {
	(void)ac;
	(void)av;

	/* var zone */
	char	c1 = 'a';
	char	c2 = 'b';
	int		i1 = 42;
	int		i2 = -42;
	float	f1 = 42.0f;
	float	f2 = -42.0f;
	double	d1 = 42.42;
	double	d2 = -42.42;


	/* char test */
	std::cout << CYN << "\n\n[ TEST: char ]\n" << DFT;
	std::cout << "c1: " << c1 << ", c2: " << c2 << std::endl;
	std::cout << min(c1, c2) << std::endl;
	std::cout << max(c1, c2) << std::endl;
	swap(c1, c2);
	std::cout << "c1: " << c1 << ", c2: " << c2 << std::endl;


	/* int test */
	std::cout << CYN << "\n\n[ TEST: int ]\n" << DFT;
	std::cout << "i1: " << i1 << ", i2: " << i2 << std::endl;
	std::cout << min(i1, i2) << std::endl;
	std::cout << max(i1, i2) << std::endl;
	swap(i1, i2);
	std::cout << "i1: " << i1 << ", i2: " << i2 << std::endl;
	
	/* float test */
	std::cout << CYN << "\n\n[ TEST: float ]\n" << DFT;
	std::cout << "f1: " << f1 << ", f2: " << f2 << std::endl;
	std::cout << min(f1, f2) << std::endl;
	std::cout << max(f1, f2) << std::endl;
	swap(f1, f2);
	std::cout << "f1: " << f1 << ", f2: " << f2 << std::endl;
	
	/* double test */
	std::cout << CYN << "\n\n[ TEST: double ]\n" << DFT;
	std::cout << "d1: " << d1 << ", d2: " << d2 << std::endl;
	std::cout << min(d1, d2) << std::endl;
	std::cout << max(d1, d2) << std::endl;
	swap(d1, d2);
	std::cout << "d1: " << d1 << ", d2: " << d2 << std::endl;

	/* STUPID test 1*/
	std::cout << CYN << "\n\n[ TEST: STUPID 1]\n" << DFT;
	std::cout << "d1: " << d1 << ", f2: " << f2 << std::endl;
	std::cout << min(d1, f2) << std::endl;
	std::cout << max(d1, f2) << std::endl;
	std::cout << swap(d1, f2) << std::endl;
	std::cout << "d1: " << d1 << ", f2: " << f2 << std::endl;

	/* STUPID test 2 => you cannnot compile :) */
	// std::cout << CYN << "\n\n[ TEST: STUPID 2]\n" << DFT;
	// Test t1;
	// std::cout << min(d1, t1) << std::endl;
	// std::cout << max(d1, t1) << std::endl;
	// std::cout << swap(d1, t1) << std::endl;

	return 0;
}