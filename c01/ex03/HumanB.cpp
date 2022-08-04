/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:07:59 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/04 10:38:52 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {
	std::cout << "HumanB: constructor called" << std::endl;
}
HumanB::HumanB(std::string name) {
	this->_name = name;
	std::cout << "HumanB: constructor called" << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB: Destructor called" << std::endl;
	return ;
}

void HumanB::attack(void) {
	std::cout << this->_name << " attack with " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon) {
	this->_weapon = &weapon;
}