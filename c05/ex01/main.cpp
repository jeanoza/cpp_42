/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/01 10:27:59 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	{
		std::cout << "\n\n= = = = = TEST mandatory 1: Form validation = = = = =\n";
		try {
			Form a("hello", 1, 10);
			std::cout << a << std::endl;
			Form b("world", 0, 150);
			std::cout << b << std::endl;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 2: Copy Form = = = = =\n";
		try {
			Form a("hello", 42, 10);
			Form b = a;
			std::cout << a << std::endl;
			std::cout << b << std::endl;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 3: Sign Form = = = = =\n";
		try {
			Bureaucrat jean("Jean", 10);
			Bureaucrat paul("Paul", 43);
			Form a("hello", 42, 10);
			Form b("world", 42, 10);
			std::cout << jean << std::endl;
			std::cout << a << std::endl;
			std::cout << b << std::endl;

			jean.signForm(a);
			std::cout <<std::endl;
			paul.signForm(b);
			std::cout <<std::endl;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST : Already signed = = = = =\n";
		try {
			Bureaucrat jean("Jean", 10);
			Form a("hello", 42, 10);
			std::cout << jean << std::endl;
			std::cout << a << std::endl;

			jean.signForm(a);
			std::cout <<std::endl;
			jean.signForm(a);
			std::cout <<std::endl;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	return 0;
}
