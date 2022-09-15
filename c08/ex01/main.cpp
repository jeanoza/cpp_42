/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/15 11:19:31 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(int ac, char **av) {
	(void)ac;
	(void)av;

	Span a(5);
	try {
		a.addNumber(1);
		a.addNumber(-1);
		a.addNumber(0);
		a.addNumber(-42);
		a.addNumber(42);
		a.addNumber(-1000);
	} catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}

	try {
		std::cout << "longestSpan(): " << a.longestSpan() << std::endl;
	}  catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}


	try {
		std::cout << "shortestSpan(): " << a.shortestSpan() << std::endl;
	}  catch (std::exception &e) {
		std::cout << RED << e.what() << DFT << std::endl;
	}
	
	// Span b(a);


}