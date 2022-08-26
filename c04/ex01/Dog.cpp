/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 10:56:56 by kyubongchoi      ###   ########.fr       */
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
	*this = inst;
	return ;
}

Dog::~Dog() {
	std::cout << GRN << "Dog::destructor called\n" << DFT;
	delete this->_brain;
	return ;
}

Dog &Dog::operator=(const Dog &rhs) {
	if (this->type != rhs.type) this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Dog::Wang! Wang!\n";
}