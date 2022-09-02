/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/02 16:47:45 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
		ShrubberyCreationForm *c = b;// shallow copy thus do not delete c
		std::cout << *a;
		std::cout << *b;
		std::cout << *c;


		//FIXME:that's why I do not need to overload copy assignment operator in child
		// std::cout << RED << "\n\n* * * * no need test * * * *\n" << DFT;
		// ShrubberyCreationForm d;
		// ShrubberyCreationForm *d2 = new ShrubberyCreationForm();
		// std::cout << BLU << "\n\n(d)static:";
		// std::cout << d;
		// std::cout << BLU << "\n\n(d2)dynamic:";
		// std::cout << *d2;
		// d = *a;
		// *d2 = *b;
		// std::cout << BLU << "\n\n(d)static:";
		// std::cout << d;
		// std::cout << BLU << "\n\n(d2)dynamic:";
		// std::cout << *d2;
		// std::cout << RED << "\nSee _target is well copied although i didn't implement copy assignment operator in child\n" << DFT;
		// std::cout << RED << "\n* * * * * * * * * * * *\n" << DFT;

		delete a;
		delete b;
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 3-1: ShrubberyCreationForm (execute success) = = = = =\n";
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
		std::cout << "\n\n= = = = = TEST mandatory 3-2: ShrubberyCreationForm (execute fail) = = = = =\n";
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
	{
		std::cout << "\n\n= = = = = TEST mandatory 4-1: RobotomyRequestForm (execute success) = = = = =\n";
		try {
			RobotomyRequestForm a("test_exec_success");
			Bureaucrat jean("Jean", 45);

			std::cout << jean << std::endl;
			std::cout << a << std::endl;
			jean.signForm(a);
			jean.executeForm(a);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 4-2: RobotomyRequestForm (execute fail) = = = = =\n";
		try {
			RobotomyRequestForm a("test_exec_fail");
			Bureaucrat paul("Paul", 72);
			std::cout << paul << std::endl;
			std::cout << a << std::endl;
			paul.signForm(a);
			paul.executeForm(a);// exception because Paul has not enough grade to execute ShrubberyForm
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 4-1: PresidentialPardonForm (execute success) = = = = =\n";
		try {
			PresidentialPardonForm a("test_exec_success");
			Bureaucrat jean("Jean", 4);

			std::cout << jean << std::endl;
			std::cout << a << std::endl;
			jean.signForm(a);
			jean.executeForm(a);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 4-2: PresidentialPardonForm (execute fail) = = = = =\n";
		try {
			PresidentialPardonForm a("test_exec_fail");
			Bureaucrat paul("Paul", 25);
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
