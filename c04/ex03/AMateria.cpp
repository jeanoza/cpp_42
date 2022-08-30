/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:24:50 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/30 16:06:22 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << YEL << "AMateria::default constructor\n" << DFT;
	this->type = "Unknown";
	return ;
}

AMateria::AMateria(const std::string &type) {
	std::cout << YEL << "AMateria::parametric constructor\n" << DFT;
	this->type = type;
	return ;
}

AMateria::AMateria(const AMateria &inst) {
	std::cout << YEL << "AMateria::copy constructor\n" << DFT;
	this->type = inst.type;
	return ;
}

AMateria::~AMateria() {
	std::cout << YEL << "AMateria::destructor\n" << DFT;
	return ;
}

AMateria &AMateria::operator=(const AMateria &rhs) {
	std::cout << YEL << "AMateria::copy assignation\n" << DFT;
	this->type = rhs.type;
	return (*this);
}

const std::string &AMateria::getType() const{
	return this->type;
}

void		AMateria::use(ICharacter &target) {
	(void)target;
	std::cout << "AMateria::use\n";
}
