/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/22 15:35:41 by kyubongchoi      ###   ########.fr       */
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
	*this = inst;
	return ;
}

WrongDog::~WrongDog() {
	std::cout << GRN << "WrongDog::destructor called\n" << DFT;
	return ;
}
WrongDog &WrongDog::operator=(const WrongDog &rhs) {
	std::cout << YEL << "WrongDog::copy assignation called\n" << DFT;
	if (this->type != rhs.type) this->type = rhs.type;
	return (*this);
}

void	WrongDog::makeSound() const {
	std::cout << "WrongDog::Wang! Wang!\n";
}