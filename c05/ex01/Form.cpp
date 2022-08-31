/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:03:36 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/31 18:36:11 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Unknown"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {
	std::cout << YEL << "Form::default constructor\n" << DFT;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << YEL << "Form::parametric constructor\n" << DFT;
}
Form::Form(const Form &inst)
	: _name(inst._name), _isSigned(false), _gradeToSign(inst._gradeToSign), _gradeToExec(inst._gradeToExec) {
	this->-_isSigned = inst._isSigned;
	std::cout << YEL << "Form::copy constructor\n" << DFT;
}
Form::~Form() {
	std::cout << YEL << "Form::destructor\n" << DFT;
}
Form	&Form::operator=(const Form &rhs) {
	this->_isSigned = rhs._isSigned;
	*this = rhs;
	return (*this);
}