/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:07:39 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 10:40:09 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon)
	:_name(name), _weapon(weapon) {
	std::cout << CYN << "HumanA: constructor with name and weapon called"
		<< DFT << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << RED << "HumanA: destructor called"
		<< DFT << std::endl;
	return ;
}

void HumanA::attack(void) const{
	std::cout << this->_name << " attacks with their "
		<< this->_weapon.getType() << std::endl;
}