/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:03:36 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/01 11:55:57 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* canonical form */
Form::Form() : _name("Unknown"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {
	std::cout << YEL << "Form::default constructor\n" << DFT;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
		if (_gradeToSign < 1 || _gradeToExec < 1) throw Form::GradeTooHighException();
		if (_gradeToSign > 150 || _gradeToExec > 150) throw Form::GradeTooLowException();
		std::cout << YEL << "Form::parametric constructor\n" << DFT;
}
Form::Form(const Form &inst)
	: _name(inst._name), _isSigned(false), _gradeToSign(inst._gradeToSign), _gradeToExec(inst._gradeToExec) {
		if (_gradeToSign < 1 || _gradeToExec < 1) throw Form::GradeTooHighException();
		if (_gradeToSign > 150 || _gradeToExec > 150) throw Form::GradeTooLowException();
		_isSigned = inst._isSigned;
		std::cout << YEL << "Form::copy constructor\n" << DFT;
}
Form::~Form() {
	std::cout << YEL << "Form::destructor\n" << DFT;
}
Form	&Form::operator=(const Form &rhs) {
	_isSigned = rhs._isSigned;
	std::cout << YEL << "Form::copy assignment\n" << DFT;
	return (*this);
}

/* getters */
const std::string	Form::getName() const {
	return _name;
}
bool	Form::getIsSigned() const {
	return _isSigned;
}
int	Form::getGradeToSign() const {
	return _gradeToSign;
}
int	Form::getGradeToExec() const {
	return _gradeToExec;
}

/* member functions */
void Form::beSigned(const Bureaucrat &bInst) {
	if (_isSigned) throw Form::AlreadySigned();
	if (bInst.getGrade() > _gradeToSign) throw Form::GradeTooLowException();
	_isSigned = true;
}
void Form::execute(const Bureaucrat &bInst) {
	if (!_isSigned) throw Form::NotSigned();
	if (bInst.getGrade() > _gradeToExec) throw Form::GradeTooLowException();
}

/* exceptions class's methode overriding */
const char *Form::GradeTooHighException::what() const throw() {
	return "Form::GradeTooHighException";
}
const char *Form::GradeTooLowException::what() const throw() {
	return "Form::GradeTooLowException";
}
const char *Form::AlreadySigned::what() const throw() {
	return "Form::AlreadySigned";
}
const char *Form::NotSigned::what() const throw() {
	return "Form::NotSigned";
}


/* operator overloading */
std::ostream &operator<<(std::ostream &o, const Form &rhs) {
	o << "\nForm[ " << rhs.getName() << " ]\n- status: " << rhs.getIsSigned()
		<< "\n- grade to sign: " << rhs.getGradeToSign()
		<< "\n- grade to exec: " << rhs.getGradeToExec()
		<< std::endl;
	return o;
}