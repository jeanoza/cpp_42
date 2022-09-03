/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:01:08 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/03 09:15:15 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(){
	std::cout << MAG << "FragTrap:: Default constructor called\n" << DFT;
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}
FragTrap::FragTrap(const std::string name) : ClapTrap(name){
	std::cout << MAG << "FragTrap:: Parametric constructor called\n" << DFT;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}
FragTrap::FragTrap(const FragTrap &inst) : ClapTrap(inst) {
	std::cout << MAG << "FragTrap:: Copy constructor called:n" << DFT;
	return ;
}
FragTrap::~FragTrap(void) {
	std::cout << MAG << "FragTrap:: Destructor called\n" << DFT;
	return ;
}
void	FragTrap::attack(const std::string &target) {
	std::cout << MAG <<"FragTrap:: " << DFT;
	ClapTrap::attack(target);
}
void FragTrap::highFivesGuys(void) {
	std::cout << MAG << "FragTrap::" << this->_name << " DO HIGH FIVES GUYS!\n" << DFT;
}