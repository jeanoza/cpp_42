/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:52:45 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/02 18:20:58 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

static Form *makeShrubberyCreationForm(const std::string target) {
	return new ShrubberyCreationForm(target);
}
static Form *makePresidentialPardonForm(const std::string target) {
	return new PresidentialPardonForm(target);
}
static Form *makeRobotomyRequestForm(const std::string target) {
	return new RobotomyRequestForm(target);
}

Intern::Intern() {
	std::cout << MAG << "Intern::default constructor\n" << DFT;
}
Intern::Intern(const Intern &inst) {
	(void)inst;
	std::cout << MAG << "Intern::copy constructor\n" << DFT;
}
Intern::~Intern() {
	std::cout << MAG << "Intern::destructor\n" << DFT;
}
Intern &Intern::operator=(const Intern &rhs) {
	(void)rhs;
	std::cout << MAG << "Intern::copy assignment\n" << DFT;
	return (*this);
}

const char* Intern::NoExistForm::what() const throw() {
	return "Intern::NoExistForm";
}

Form *Intern::makeForm(const std::string name, const std::string target) {
	FormList form[3] = {
		{"shrubbery creation", &makeShrubberyCreationForm},
		{"robotomy request", &makeRobotomyRequestForm},
		{"presidential pardon", &makePresidentialPardonForm}
	};
	for (int i = 0; i < 3; ++i) 
		if (form[i]._name == name) return form[i]._func(target);
	std::cout << RED << "\n\n" << name << " is INVALID FORM NAME!!!\n" << DFT;
	std::cout << YEL << "Usage:\n";
	for (int i = 0; i < 3; ++i)
		std::cout << " makeForm(\""<< form[i]._name << "\", TARGET_NAME)" << std::endl;
	std::cout << "\n\n" << DFT;
	throw Intern::NoExistForm();
}