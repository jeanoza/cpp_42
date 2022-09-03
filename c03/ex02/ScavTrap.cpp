/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:13:54 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/03 09:05:05 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << CYN << "ScavTrap::Default constructor called\n" << DFT;
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_keeperMode = false;
	return;
}
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	std::cout << CYN << "ScavTrap::Parametric constructor called: " << this->_name << "\n" << DFT;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_keeperMode = false;
	return;
}
ScavTrap::ScavTrap(const ScavTrap &inst) : ClapTrap(inst) {
	std::cout << CYN << "ScavTrap::Copy constructor called"<< DFT;
	this->_keeperMode = inst._keeperMode;
	return ;
}
ScavTrap::~ScavTrap(void) {
	std::cout << CYN << "ScavTrap::Destructor called\n" << DFT;
	return ;
}
void	ScavTrap::attack(const std::string &target) {
	std::cout << CYN <<"ScavTrap::" << DFT;
	ClapTrap::attack(target);
}

bool	ScavTrap::getKeeperMode(void) const{
	return this->_keeperMode;
}

void	ScavTrap::guardGate(void) {
	this->_keeperMode = true;
	std::cout << CYN << "ScavTrap:: " << this->_name << " is now in gate keeper mode\n" << DFT;
}
/* ostream overloading */
std::ostream &operator<<(std::ostream &o, const ScavTrap &rhs) {
	o << CYN << "\nState of ScavTrap: " << rhs.getName()
	  << "\n _hitPoints: " << rhs.getHitPoints()
	  << "\n _energyPoints: " << rhs.getEnergyPoints()
	  << "\n _attackDamage: " << rhs.getAttackDamage()
	  << "\n _keeperMode: " << rhs.getKeeperMode()
	  << DFT << "\n\n";

	return o;
}
