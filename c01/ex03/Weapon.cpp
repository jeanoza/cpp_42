/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:06:54 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/05 13:09:23 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	std::cout << "Weapon: constructor called" <<std::endl;
}
Weapon::Weapon(std::string const &type) {
	this->_type = type;
	std::cout << "Weapon: constructor called" <<std::endl;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon: destructor called" <<std::endl;
	return ;
}

std::string const & Weapon::getType(void) const{
	return this->_type;
}
void	Weapon::setType(std::string const &type) {
	this->_type = type;
}

// void	Weapon::setType(std::string type) {
// 	this->_type = type;
// }
