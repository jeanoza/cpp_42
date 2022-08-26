/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 15:43:21 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << GRN << "Dog::default constructor called\n" << DFT;
	this->type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &inst) {
	std::cout << GRN << "Dog::copy constructor called\n" << DFT;
	this->type = inst.type;
	return ;
}

Dog::~Dog() {
	std::cout << GRN << "Dog::destructor called\n" << DFT;
	if (this->_brain) delete this->_brain;
	return ;
}

void	Dog::makeSound() const {
	std::cout << "Dog::Wang! Wang!\n";
}