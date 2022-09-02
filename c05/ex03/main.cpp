/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/02 18:21:27 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	{
		std::cout << "\n\n= = = = = TEST mandatory 1-1: Create Intern && makeForm - success case = = = = =\n";
		
		Intern a;
		try {
			Form *test = a.makeForm("shrubbery creation", "test");
			delete test;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 1-2: Create Intern && makeForm - fail case = = = = =\n";
		
		Intern a;
		try {
			Form *test = a.makeForm("STUPID_FORM", "test");
			delete test;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 2-1: Execute - ShrubberyCreationForm = = = = =\n";
		
		Intern a;
		try {
			Form *test = a.makeForm("shrubbery creation", "test_success");
			Bureaucrat jean("Jean", 42);
			jean.signForm(*test);
			jean.executeForm(*test);
			delete test;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 2-2: Execute - RobotomyRequestForm = = = = =\n";
		
		Intern a;
		try {
			Form *test = a.makeForm("robotomy request", "test_success");
			Bureaucrat jean("Jean", 42);
			jean.signForm(*test);
			jean.executeForm(*test);
			delete test;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	{
		std::cout << "\n\n= = = = = TEST mandatory 2-3: Execute - PresidentialPardonForm - fail case = = = = =\n";
		
		Intern a;
		try {
			Form *test = a.makeForm("presidential pardon", "test_fail");
			Bureaucrat jean("Jean", 25);
			jean.signForm(*test);
			jean.executeForm(*test);
			delete test;
		} catch (std::exception &e) {
			std::cout << RED << e.what() << DFT << std::endl;
		}
	}
	return 0;
}
