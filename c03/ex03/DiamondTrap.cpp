/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:50:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/21 14:45:37 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ScavTrap(), FragTrap() {
	std::cout << BLU << "DiamondTrap::Default constructor called\n" << DFT;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	this->_clap_name = this->_name + "_clap_name";
	return ;
}

DiamondTrap::DiamondTrap(const std::string name): ScavTrap(name), FragTrap(name){
	std::cout << BLU << "DiamondTrap::Parametric constructor called\n" << DFT;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	this->_clap_name = name + "_clap_name";
	return ;
}
DiamondTrap::DiamondTrap(const DiamondTrap &inst) : ScavTrap(inst), FragTrap(inst) {
	std::cout << BLU << "DiamondTrap::Copy constructor called"<< DFT;
	return ;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << BLU << "DiamondTrap::Destructor called\n" << DFT;
	return ;
}

std::string	DiamondTrap::getClapName(void) const{
	return this->_clap_name;
}

void	DiamondTrap::attack(const std::string &target) {
	std::cout << BLU << "DiamondTrap::" << DFT;
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI(void) {
	std::cout << BLU << "DiamondTrap::" << DFT;
	std::cout << "I am " << this->_name << " " << this->_clap_name << "'s son : someting like Thor Odinson:))" << "\n";
}

/* ostream overloading */
std::ostream &operator<<(std::ostream &o, const DiamondTrap &rhs) {
	o << BLU << "\nState of DiamondTrap: " << rhs.getName()
	  << "\n _hitPoints: " << rhs.getHitPoints()
	  << "\n _energyPoints: " << rhs.getEnergyPoints()
	  << "\n _attackDamage: " << rhs.getAttackDamage()
	  << "\n _clap_name:" << rhs.getClapName()
	  << DFT << "\n\n";
	  
	return o;
}