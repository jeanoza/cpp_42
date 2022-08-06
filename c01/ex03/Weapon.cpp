/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:06:54 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 10:40:50 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type) : _type(type) {
	std::cout << CYN << "Weapon: constructor with type called"
		<< DFT << std::endl;
}

Weapon::~Weapon(void) {
	std::cout << RED << "Weapon: destructor called" << DFT <<std::endl;
	return ;
}

std::string const & Weapon::getType(void) const{
	return this->_type;
}
void	Weapon::setType(std::string const type) {
	this->_type = type;
}
