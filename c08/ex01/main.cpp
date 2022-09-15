/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/16 00:39:13 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(int ac, char **av) {
	(void)ac;
	(void)av;
	
	
	Span a(5);
	Span b(1000);

	try {
		std::cout << CYN << "\n\n[ Test addNumber ]\n" << DFT;
		a.addNumber(1);
		a.addNumber(-1);
		a.addNumber(0);
		a.addNumber(-42);
		a.addNumber(42);
		a.addNumber(-1000);
	} catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}
	std::cout << "Span a";
	a.printList();

	try {
		std::cout << CYN << "\n\n[ Test a.longestSpan : correct case ]\n" << DFT;
		a.printList();
		std::cout << "a.longestSpan(): " << a.longestSpan() << std::endl;
	}  catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}
	try {
		std::cout << CYN << "\n\n[ Test b.longestSpan : error case ]\n" << DFT;
		b.printList();
		std::cout << "b.longestSpan(): " << b.longestSpan() << std::endl;
	}  catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}
	try {
		std::cout << CYN << "\n\n[ Test a.shortestSpan : correct case ]\n" << DFT;
		a.printList();
		std::cout << "shortestSpan(): " << a.shortestSpan() << std::endl;
	}  catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}
	try {
		std::cout << CYN << "\n\n[ Test b.shortestSpan : error case ]\n" << DFT;
		b.printList();
		std::cout << "shortestSpan(): " << b.shortestSpan() << std::endl;
	}  catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}


	
	std::vector<int> v_test;
	for (int i = 0; i < 1000; ++i) {
		v_test.push_back(i);
	}
	try {
		std::cout << CYN << "\n\n[ Test addRange : correct case ]\n" << DFT;
		b.addRange(v_test.begin(),v_test.end());
		b.printList();
		std::cout << "shortestSpan: " << b.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << b.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}

	//TODO:test after change Span b(1000) to b(2000) to show Span Class logic
	for (int i = 1000; i < 2000; ++i) {
		v_test.push_back(i);
	}
	try {
		std::cout << CYN << "\n\n[ Test addRange : wrong case ]\n" << DFT;
		b.addRange(v_test.begin(),v_test.end());
		b.printList();

		std::cout << "shortestSpan: " << b.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << b.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}

}