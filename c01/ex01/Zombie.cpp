/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:06:34 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/31 16:32:49 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Constructor */
Zombie::Zombie(void) {
	std::cout << BLU << "Constructor called" << DFT << std::endl;
	Zombie::_size += 1;
}
Zombie::Zombie(std::string name) : _name(name) {
	std::cout << BLU << "Constructor with name called"
		<< ": " << this->_name << DFT << std::endl;
}

/* Destructor */
Zombie::~Zombie(void) {
	Zombie::_size -= 1;
	std::cout << RED << "Destructor called"
		<< ": " << this->_name << DFT << std::endl;
	return ;
}

/* Getter */
std::string Zombie::getName(void) const{
	return this->_name;
}
int	Zombie::getSize(void) {
	return Zombie::_size;
}

/* Setter */
void	Zombie::setName(std::string name) {
	this->_name = name;
}
void	Zombie::announce(void) {
	std::cout << this->_name
		<< ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

int Zombie::_size = 0;