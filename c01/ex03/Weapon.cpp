/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:06:54 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/31 22:25:34 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	std::cout << "constructor called";
}

Weapon::~Weapon(void) {
	return ;
}

std::string Weapon::getType(void) {
	std::string &type = this->_type;
	return type;
}
void	Weapon::setType(std::string type) {
	this->_type = type;
}
