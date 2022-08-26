/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:17 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 15:37:31 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << YEL << "Cat::default constructor called\n" << DFT;
	this->type = "Cat";
	return ;
}
Cat::Cat(const Cat &inst) {
	std::cout << YEL << "Cat::copy constructor called\n" << DFT;
	this->type = inst.type;
	return ;
}

Cat::~Cat() {
	std::cout << YEL << "Cat::destructor called\n" << DFT;
	return ;
}

void	Cat::makeSound() const{
	std::cout << "Cat::Nya-on Nya-on\n";
}