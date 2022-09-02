/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:02:02 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/02 16:46:02 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {
	std::cout << BLU << "PresidentialPardonForm::default constructor\n" << DFT;
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: Form("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << BLU << "PresidentialPardonForm::parametric constructor\n" << DFT;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &inst)
	: Form("PresidentialPardonForm", 25, 5), _target(inst._target) {
	std::cout << BLU << "PresidentialPardonForm::copy constructor\n" << DFT;
}
PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << BLU << "PresidentialPardonForm::destructor\n" << DFT;
}

/* getter */
std::string	PresidentialPardonForm::getTarget() const {
	return _target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &bInst) const {
	if (!_isSigned) throw PresidentialPardonForm::NotSigned();
	if (bInst.getGrade() > _gradeToExec) throw PresidentialPardonForm::GradeTooLowException();
	
	std::cout << BLU << _target << " has been pardoned by Zaphod Beeblebrox\n";
}

/* operator overloading */
std::ostream &operator<<(std::ostream &o, const PresidentialPardonForm &rhs) {
	o << "\nForm[ " << rhs.getName() << " ]"
		<< "\n- status: " << rhs.getIsSigned()
		<< "\n- grade to sign: " << rhs.getGradeToSign()
		<< "\n- grade to exec: " << rhs.getGradeToExec()
		<< "\n- target: " << rhs.getTarget()
		<< std::endl;
	return o;
}