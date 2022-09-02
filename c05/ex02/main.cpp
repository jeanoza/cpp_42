/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/02 15:17:28 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	{
		std::cout << "\n\n= = = = = TEST mandatory 1: ShrubberyCreationForm (static) = = = = =\n";
		ShrubberyCreationForm a("test static");
		ShrubberyCreationForm b = a;
		std::cout << a;
		std::cout << b;
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 2: ShrubberyCreationForm (dynamic) = = = = =\n";
		ShrubberyCreationForm *a = new ShrubberyCreationForm("test dynamic");
		ShrubberyCreationForm *b = new ShrubberyCreationForm(*a); // deep copy
		ShrubberyCreationForm *c = b; // shallow copy thus do not delete c
		std::cout << *a;
		std::cout << *b;
		std::cout << *c;

		delete a;
		delete b;
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 3: ShrubberyCreationForm (execute success) = = = = =\n";
		try {
			ShrubberyCreationForm a("test_exec_success");
			Bureaucrat jean("Jean", 137);
			std::cout << jean << std::endl;
			std::cout << a << std::endl;
			jean.signForm(a);
			jean.executeForm(a);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 3: ShrubberyCreationForm (execute fail) = = = = =\n";
		try {
			ShrubberyCreationForm a("test_exec_fail");
			Bureaucrat paul("Paul", 145);
			std::cout << paul << std::endl;
			std::cout << a << std::endl;
			paul.signForm(a);
			paul.executeForm(a);// exception because Paul has not enough grade to execute ShrubberyForm
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
