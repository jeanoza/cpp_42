/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/11 12:03:58 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Test { };

int main(int ac, char **av) {
	(void)ac;
	(void)av;


	std::cout << CYN << "\n\n[ TEST: mandatory ]\n" << DFT;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	/* var zone */
	char	c1 = 'a';
	char	c2 = 'b';
	int		i1 = 42;
	int		i2 = -42;
	float	f1 = 42.01f;
	float	f2 = -42.01f;
	double	d1 = 42.42;
	double	d2 = -42.42;
	std::string s1 = "42Paris";
	std::string s2 = "42Séoul";



	/* char test */
	std::cout << CYN << "\n\n[ TEST: char ]\n" << DFT;
	std::cout << "c1: " << c1 << ", c2: " << c2 << std::endl;
	std::cout << YEL << "min(c1, c2): " << ::min(c1, c2) << DFT << std::endl;
	std::cout << MAG << "max(c1, c2): " << ::max(c1, c2) << DFT << std::endl;
	::swap(c1, c2);
	std::cout << GRN << "swap(c1, c2)" << DFT << std::endl;
	std::cout << "c1: " << c1 << ", c2: " << c2 << std::endl;


	/* int test */
	std::cout << CYN << "\n\n[ TEST: int ]\n" << DFT;
	std::cout << "i1: " << i1 << ", i2: " << i2 << std::endl;
	std::cout << YEL << "min(i1, i2): " << ::min(i1, i2) << DFT << std::endl;
	std::cout << MAG << "max(i1, i2): " << ::max(i1, i2) << DFT << std::endl;
	::swap(i1, i2);
	std::cout << GRN << "swap(i1, i2)" << DFT << std::endl;
	std::cout << "i1: " << i1 << ", i2: " << i2 << std::endl;
	
	/* float test */
	std::cout << CYN << "\n\n[ TEST: float ]\n" << DFT;
	std::cout << "f1: " << f1 << ", f2: " << f2 << std::endl;
	std::cout << YEL << "min(f1, f2): " << ::min(f1, f2) << DFT << std::endl;
	std::cout << MAG << "max(f1, f2): " << ::max(f1, f2) << DFT << std::endl;
	::swap(f1, f2);
	std::cout << GRN << "swap(f1, f2)" << DFT << std::endl;
	std::cout << "f1: " << f1 << ", f2: " << f2 << std::endl;
	
	/* double test */
	std::cout << CYN << "\n\n[ TEST: double ]\n" << DFT;
	std::cout << "d1: " << d1 << ", d2: " << d2 << std::endl;
	std::cout << YEL << "min(d1, d2): " << ::min(d1, d2) << DFT << std::endl;
	std::cout << MAG << "max(d1, d2): " << ::max(d1, d2) << DFT << std::endl;
	::swap(d1, d2);
	std::cout << GRN << "swap(d1, d2)" << DFT << std::endl;
	std::cout << "d1: " << d1 << ", d2: " << d2 << std::endl;

	/* string test */
	std::cout << CYN << "\n\n[ TEST: string ]\n" << DFT;
	std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;
	std::cout << YEL << "min(s1, s2): " << ::min(s1, s2) << DFT << std::endl;
	std::cout << MAG << "max(s1, s2): " << ::max(s1, s2) << DFT << std::endl;
	::swap(s1, s2);
	std::cout << GRN << "swap(s1, s2)" << DFT << std::endl;
	std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;

	/* STUPID test 1*/
	std::cout << CYN << "\n\n[ TEST: STUPID 1]\n" << DFT;
	std::cout << "d1: " << d1 << ", f2: " << f2 << std::endl;
	::min(d1, f2);
	::max(d1, f2);
	::swap(d1, f2);
	std::cout << GRN << "swap(d1, f2)" << DFT << std::endl;
	std::cout << "d1: " << d1 << ", f2: " << f2 << std::endl;

	std::cout << CYN << "\n\n[ TEST: STUPID 2]\n" << DFT;
	std::cout << "s1: " << s1 << ", f2: " << f2 << std::endl;
	::min(s1, f2);
	::max(s1, f2);
	::swap(s1, f2);
	std::cout << GRN << "swap(s1, f2)" << DFT << std::endl;
	std::cout << "s1: " << s1 << ", f2: " << f2 << std::endl;

	/* STUPID test 3 => you cannnot compile :) */
	// std::cout << CYN << "\n\n[ TEST: STUPID 3]\n" << DFT;
	// Test t1;
	// std::cout << min(d1, t1) << std::endl;
	// std::cout << max(d1, t1) << std::endl;
	// std::cout << swap(d1, t1) << std::endl;

	return 0;
}
