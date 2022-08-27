/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:24:50 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/27 13:46:55 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << CYN << "AMateria::default constructor\n" << DFT;
	this->type = "Unknown";
	return ;
}

AMateria::AMateria(const std::string &type) {
	std::cout << CYN << "AMateria::parametric constructor\n" << DFT;
	this->type = type;
	return ;
}

AMateria::AMateria(const AMateria &inst) {
	std::cout << CYN << "AMateria::copy constructor\n" << DFT;
	this->type = inst.type;
	return ;
}

AMateria::~AMateria() {
	std::cout << CYN << "AMateria::destructor\n" << DFT;
	return ;
}

AMateria &AMateria::operator=(const AMateria &rhs) {
	std::cout << CYN << "AMateria::copy assignation\n" << DFT;
	if (this != &rhs) this->type = rhs.type;
	return (*this);
}
