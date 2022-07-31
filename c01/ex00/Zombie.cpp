/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:06:34 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/31 15:44:43 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Constructor */
Zombie::Zombie(void) {
	std::cout << "Constructor called" << std::endl;
}
Zombie::Zombie(std::string name) : _name(name) {
	std::cout << BLU << "Constructor with name called"
		<< ": " << this->_name << DFT << std::endl;
}

/* Destructor */
Zombie::~Zombie(void) {
	std::cout << RED << "Destructor called"
		<< ": " << this->_name << DFT << std::endl;
	return ;
}

void	Zombie::announce(void) {
	std::cout << this->_name
		<< ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}
