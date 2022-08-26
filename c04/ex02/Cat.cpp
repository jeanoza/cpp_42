/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:17 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 17:11:33 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << YEL << "Cat::default constructor called\n" << DFT;
	this->type = "Cat";
	this->_brain = new Brain();
	return ;
}
Cat::Cat(const Cat &inst) {
	std::cout << YEL << "Cat::copy constructor called\n" << DFT;
	this->type = inst.type;
	this->_brain = new Brain(*(inst._brain));
	return ;
}
Cat::~Cat() {
	std::cout << YEL << "Cat::destructor called\n" << DFT;
	if (this->_brain) delete this->_brain;
	return ;
}

/* getter */
Brain *Cat::getBrain() const {
	return this->_brain;
}

void	Cat::makeSound() const{
	std::cout << "Cat::Nya-on Nya-on\n";
}