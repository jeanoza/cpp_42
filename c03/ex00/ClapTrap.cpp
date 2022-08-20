/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:23:51 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/20 13:20:45 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor called\n";
	this->_name = "Default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}
ClapTrap::ClapTrap(const std::string name) : _name(name) {
	std::cout << "Parametric constructor called: " << this->_name << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return;
}
ClapTrap::ClapTrap(const ClapTrap &inst) {
	std::cout << "Copy constructor called\n";
	*this = inst;
	return ;
}
ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called\n";
	return;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	std::cout << "Copy assignation operator called\n";
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return (*this);
}

/* getters */
std::string	ClapTrap::getName(void) const {
	return this->_name;
}
unsigned int	ClapTrap::getHitPoints(void) const{
	return this->_hitPoints;
}
unsigned int	ClapTrap::getEnergyPoints(void) const{
	return this->_energyPoints;
}
unsigned int	ClapTrap::getAttackDamage(void) const{
	return this->_attackDamage;
}

/* member functions */
void	ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "ClapTrap "<< this->_name << " attacks " << target
				  << ", causing " << this->_attackDamage << " points of damage!\n";
		--this->_energyPoints;
	} else std::cout << RED << this->_name
		<< " doesn't have enough energy or hit point to attack a cible!\n" << DFT;
}
void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0) {
		//Protection pour ne pas avoir underflow à this->_hitPoints
		if (this->_hitPoints < amount) this->_hitPoints = 0;
		else this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " lost " << amount
				  << " hit point (current: " << this->_hitPoints << ")\n" << DFT;
	} else std::cout << RED << "ClapTrap " << this->_name << " is already dead!\n" << DFT;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		//Il n'y a pas de max_limit de _hitPoint dans le sujet, je n'ai pas à le gérér.
		this->_hitPoints += amount;
		--this->_energyPoints;
		std::cout << "ClapTrap " << this->_name << " has been repaired with "
				  << amount << " point.(current: " << this->_hitPoints << ")\n";
	}
	else std::cout << RED << this->_name
				   << " doesn't have enough energy or hit point to be repaired!\n" << DFT;
}

/* ostream overloading */
std::ostream &operator<<(std::ostream &o, const ClapTrap &rhs) {
	o << YEL << "\nState of Trap: " << rhs.getName()
	  << "\n _hitPoints: " << rhs.getHitPoints()
	  << "\n _energyPoints: " << rhs.getEnergyPoints()
	  << "\n _attackDamage: " << rhs.getAttackDamage()
	  << DFT << "\n\n";

	return o;
}
