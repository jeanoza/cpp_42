/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/31 15:33:36 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	{
		std::cout << "\n= = = = = TEST mandatory 1: exception at constructor = = = = =\n";
		try {
			Bureaucrat a("Jean", 3);
			std::cout << a << std::endl;
			Bureaucrat b("Paul", 151);
			std::cout << b << std::endl;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;

		}
	}
	{
		std::cout << "\n= = = = = TEST mandatory 2: exception after at incrementGrade() = = = = =\n";
		try {
			Bureaucrat a("Jean", 3);
			for (int i = 0; i < 4; ++i) {
				a.incrementGrade();
				std::cout << a << std::endl;
			}
			std::cout << a << std::endl;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	{
		std::cout << "\n= = = = = TEST mandatory 3: exception after at decrementGrade() = = = = =\n";
		try {
			Bureaucrat a("Paul", 148);
			for (int i = 0; i < 4; ++i) {
				a.decrementGrade();
				std::cout << a << std::endl;
			}
			std::cout << a << std::endl;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	{
		std::cout << "\n= = = = = TEST dynamic allocation = = = = =\n";
		Bureaucrat *a;
		Bureaucrat *b;
		try {
			a = new Bureaucrat("Jean", 1);
			std::cout << *a << std::endl;
			delete a;
			b = new Bureaucrat("Paul", -1);
			// next 2 lines will not execute because of exception but the memory will be freed by program.
			// to prouve this delete comment at catch
			std::cout << *b << std::endl;
			delete b;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
			// std::cout << *b << std::endl;
			// delete b;
		}
	}
	return 0;
}
