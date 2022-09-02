/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:21:53 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/31 14:44:14 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* canonical form */
Bureaucrat::Bureaucrat() : _name("unknown"), _grade(150) {
	std::cout << CYN << "Bureaucrat::default constructor\n" << DFT;
}
Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name) {
	if (grade < 1) throw Bureaucrat::GradeTooHighException(); 
	if (grade > 150) throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	std::cout << CYN << "Bureaucrat::parametric constructor\n" << DFT;
}
Bureaucrat::Bureaucrat(const Bureaucrat &inst) : _name(inst._name){
	this->_grade = inst.getGrade();
	std::cout << CYN << "Bureaucrat::copy constructor\n";
}
Bureaucrat::~Bureaucrat() {
	std::cout << CYN << "Bureaucrat::destructor\n" << DFT;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	this->_grade = rhs.getGrade();
	std::cout << CYN << "Bureaucrat::copy assignment\n" << DFT;
	return (*this);
}

/* getters */
const std::string Bureaucrat::getName() const{
	return this->_name;
}
int Bureaucrat::getGrade() const {
	return this->_grade;
}

/* member functions */
void Bureaucrat::incrementGrade() {
	if (this->_grade == 1) throw Bureaucrat::GradeTooHighException();
	--this->_grade;
}
void Bureaucrat::decrementGrade() {
	if (this->_grade == 150) throw Bureaucrat::GradeTooLowException();
	++this->_grade;
}
void	Bureaucrat::signForm(Form &inst) {
	try {
		inst.beSigned(*this);
		std::cout << CYN << _name
				  << " signed " << inst.getName() << DFT << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << _name
				  << " couldn't sign " << inst.getName()
				  <<" because " << e.what() << DFT << std::endl;
	}
}
void	Bureaucrat::executeForm(Form const &inst){
	try {
		inst.execute(*this);
		std::cout << CYN << _name
				  << " executed " << inst.getName() << DFT << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << _name
				  << " couldn't execute " << inst.getName()
				  <<" because " << e.what() << DFT << std::endl;
	}
}


/* exceptions class's methode overriding */
const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat::GradeTooHighException";
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat::GradeTooLowException";
}

/* ostream overloading */
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
