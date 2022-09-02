/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:00:45 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/02 16:27:39 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137), _target("Unknown"){
		std::cout << GRN << "Shrubbery::default constructor\n" << DFT;
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target){
		std::cout << GRN << "Shrubbery::parametric constructor\n" << DFT;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &inst)
	: Form(inst), _target(inst._target){
		std::cout << GRN << "Shrubbery::copy constructor\n" << DFT;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << GRN << "Shrubbery::destructor\n" << DFT;
}
// ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
// 	Form::operator=(rhs);
// 	_target = rhs.getTarget();
// 	std::cout << GRN << "Shrubbery::copy assignment\n" << DFT;
// 	return *this;
// }

/* getters */
std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}

/* member functions */
void ShrubberyCreationForm::execute(const Bureaucrat &bInst) const{
	if (!_isSigned) throw ShrubberyCreationForm::NotSigned();
	if (bInst.getGrade() > _gradeToExec) throw ShrubberyCreationForm::GradeTooLowException();

	std::ofstream ofs(_target + "_shrubbery");
	
	// Protection when create file failed
    if (ofs.fail())  throw ShrubberyCreationForm::CreateFileFailed();

	// draw tree in _target_shrubbery file
	ofs << "	      .\n"
		<< "   __/ \\__\n"
		<< "   \\     /\n"
		<< "   /.'o'.\\n"
		<< "    .o.'.\n"
		<< "   .'.'o'.\n"
		<< "  o'.o.'.o.\n"
		<< " .'.o.'.'.o.\n"
		<< ".o.'.o.'.o.'.\n"
		<< "   [_____]\n"
		<< "    \\___/ \n";

	ofs.close();
}


/* operator overloading */
std::ostream &operator<<(std::ostream &o, const ShrubberyCreationForm &rhs) {
	o << "\nForm[ " << rhs.getName() << " ]"
		<< "\n- status: " << rhs.getIsSigned()
		<< "\n- grade to sign: " << rhs.getGradeToSign()
		<< "\n- grade to exec: " << rhs.getGradeToExec()
		<< "\n- target: " << rhs.getTarget()
		<< std::endl;
	return o;
}