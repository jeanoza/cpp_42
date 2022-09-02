/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:01:33 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/02 16:46:28 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
	std::cout << BLU << "RobotomyRequestForm::default constructor\n" << DFT;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: Form("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << BLU << "RobotomyRequestForm::parametric constructor\n" << DFT;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &inst)
	: Form("RobotomyRequestForm", 72, 45), _target(inst._target) {
	std::cout << BLU << "RobotomyRequestForm::copy constructor\n" << DFT;
}
RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << BLU << "RobotomyRequestForm::destructor\n" << DFT;
}

/* getter */
std::string	RobotomyRequestForm::getTarget() const {
	return _target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &bInst) const {
	if (!_isSigned) throw RobotomyRequestForm::NotSigned();
	if (bInst.getGrade() > _gradeToExec) throw RobotomyRequestForm::GradeTooLowException();
	
	std::cout << BLU << _target << " has been robotomized successfully 50% of the time\n";
}

/* operator overloading */
std::ostream &operator<<(std::ostream &o, const RobotomyRequestForm &rhs) {
	o << "\nForm[ " << rhs.getName() << " ]"
		<< "\n- status: " << rhs.getIsSigned()
		<< "\n- grade to sign: " << rhs.getGradeToSign()
		<< "\n- grade to exec: " << rhs.getGradeToExec()
		<< "\n- target: " << rhs.getTarget()
		<< std::endl;
	return o;
}