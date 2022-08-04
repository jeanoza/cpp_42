/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:06:54 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/04 10:42:23 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	std::cout << "Weapon: constructor called" <<std::endl;
}
Weapon::Weapon(std::string type) {
	this->_type = type;
	std::cout << "Weapon: constructor called" <<std::endl;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon: destructor called" <<std::endl;
	return ;
}

std::string & Weapon::getTypeRef(void){
	return this->_type;
}
std::string const & Weapon::getType(void) const{
	return this->_type;
}
void	Weapon::setType(std::string type) {
	this->getTypeRef() = type;
}

// void	Weapon::setType(std::string type) {
// 	this->_type = type;
// }
