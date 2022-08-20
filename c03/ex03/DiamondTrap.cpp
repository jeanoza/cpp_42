/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:50:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/20 14:30:57 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// DiamondTrap::DiamondTrap(void) : ClapTrap(){
DiamondTrap::DiamondTrap(void): ScavTrap(), FragTrap() {
	std::cout << BLU << "DiamondTrap:: Default constructor called\n" << DFT;
	// this->_name = this->ClapTrap::_name;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;

	std::cout << "= = = = FragTrap = = = = =\n";
	std::cout << this->FragTrap::_hitPoints << std::endl;
	std::cout << this->FragTrap::_energyPoints << std::endl;
	std::cout << this->FragTrap::_attackDamage << std::endl;

	std::cout << "= = = = ScavTrap = = = = =\n";
	std::cout << this->ScavTrap::_hitPoints << std::endl;
	std::cout << this->ScavTrap::_energyPoints << std::endl;
	std::cout << this->ScavTrap::_attackDamage << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name){
	std::cout << BLU << "DiamondTrap:: Parametric constructor called\n" << DFT;
	this->_name = name;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	this->_clap_name = name + "_clap_name";
	return ;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << BLU << "DiamondTrap:: Destructor called\n" << DFT;
	return ;
}

void	DiamondTrap::attack(const std::string &target) {
	std::cout << BLU << "DiamondTrap::" << DFT;
	ScavTrap::attack(target);
}
void	DiamondTrap::takeDamage(unsigned int amount) {
	std::cout << BLU << "DiamondTrap::" << DFT;
	ClapTrap::takeDamage(amount);
}
void	DiamondTrap::beRepaired(unsigned int amount) {
	std::cout << BLU << "DiamondTrap::" << DFT;
	ClapTrap::beRepaired(amount);
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
	  << DFT << "\n\n";
	  
	return o;
}