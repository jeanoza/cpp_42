/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:07:55 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/31 08:51:53 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	std::cout << MAG << "Cure::default constructor\n" << DFT;
	this->type = "cure";
	return ;
}

Cure::Cure(const Cure &inst) {
	std::cout << MAG << "Cure::copy constructor\n" << DFT;
	this->type = inst.type;
	return ;
}

Cure::~Cure() {
	std::cout << MAG << "Cure::destructor\n" << DFT;
	return ;
}

Cure *Cure::clone() const{
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() <<  " wounds *\n";
}
