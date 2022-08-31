/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:07:55 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/31 08:51:43 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	std::cout << CYN << "Ice::default constructor\n" << DFT;
	this->type = "ice";
	return ;
}

Ice::Ice(const Ice &inst) {
	std::cout << CYN << "Ice::copy constructor\n" << DFT;
	this->type = inst.type;
	return ;
}

Ice::~Ice() {
	std::cout << CYN << "Ice::destructor\n" << DFT;
	return ;
}

Ice *Ice::clone() const{
	return new Ice();
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
