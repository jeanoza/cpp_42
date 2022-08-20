/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:01:08 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/20 10:34:23 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(){
	std::cout << MAG << "FragTrap:: Default constructor called" << DFT;
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << MAG << "FragTrap:: Parametric constructor called: "  << this->_name << "\n" << DFT;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}
FragTrap::~FragTrap(void) {
	std::cout << MAG << "FragTrap::" << DFT;
	return ;
}
void FragTrap::highFivesGuys(void) {
	std::cout << MAG << "FragTrap::" << this->_name << " DO HIGH FIVES GUYS!\n" << DFT;
}