/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 16:03:44 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() {
	std::cout << GRN << "WrongDog::default constructor called\n" << DFT;
	this->type = "WrongDog";
	return ;
}

WrongDog::WrongDog(const WrongDog &inst) {
	std::cout << GRN << "WrongDog::copy constructor called\n" << DFT;
	this->type = inst.type;
	return ;
}

WrongDog::~WrongDog() {
	std::cout << GRN << "WrongDog::destructor called\n" << DFT;
	return ;
}

void	WrongDog::makeSound() const {
	std::cout << "WrongDog::Wang! Wang!\n";
}