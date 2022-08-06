/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:07:59 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 10:40:52 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	std::cout << CYN << "HumanB: constructor with name called"
		<< DFT << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << RED << "HumanB: destructor called" 
		<< DFT << std::endl;
	return ;
}

void HumanB::attack(void) const {
	std::cout << this->_name << " attacks with their " 
		<< this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon & weapon) {
	this->_weapon = &weapon;
}