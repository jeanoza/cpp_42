/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/22 15:35:41 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << GRN << "Dog::default constructor called\n" << DFT;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog &inst) {
	std::cout << GRN << "Dog::copy constructor called\n" << DFT;
	// this->type = "Dog";
	*this = inst;
	return ;
}

Dog::~Dog() {
	std::cout << GRN << "Dog::destructor called\n" << DFT;
	return ;
}

void	Dog::makeSound() const {
	std::cout << "Dog::Wang! Wang!\n";
}