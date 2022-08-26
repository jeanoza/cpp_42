/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:17 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 10:53:59 by kyubongchoi      ###   ########.fr       */
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
	*this = inst;
	return ;
}

Cat::~Cat() {
	std::cout << YEL << "Cat::destructor called\n" << DFT;
	return ;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << YEL << "Cat::copy assignation called\n" << DFT;
	if (this->type != rhs.type) this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "Cat::Nya-on Nya-on\n";
}