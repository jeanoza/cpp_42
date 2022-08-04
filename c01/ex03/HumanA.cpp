/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:07:39 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/04 10:41:06 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void) {
	std::cout << "HumanA: constructor called" << std::endl;
}
HumanA::HumanA(std::string name, Weapon weapon) {
	this->_name = name;
	this->_weapon = &weapon;
	std::cout << "HumanA: constructor with param called" << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA: Destructor called" << std::endl;
	return ;
}

void HumanA::attack(void) {
	std::cout << this->_name << " attack with " << this->_weapon->getType() << std::endl;
}