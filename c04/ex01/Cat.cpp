/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:17 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 08:35:37 by kyubongchoi      ###   ########.fr       */
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
	*this = inst;
	return ;
}
Cat::~Cat() {
	std::cout << YEL << "Cat::destructor called\n" << DFT;
	delete this->_brain;
	return ;
}
void	Cat::makeSound() const{
	std::cout << "Cat::Nya-on Nya-on\n";
}