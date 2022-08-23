/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:17 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/22 16:24:50 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//TODO: diff with nextline?
Cat::Cat() {
	std::cout << YEL << "Cat::default constructor called\n" << DFT;
	this->type = "Cat";
	return ;
}
//TODO: diff with nextline?
Cat::Cat(const Cat &inst) {
	std::cout << YEL << "Cat::copy constructor called\n" << DFT;
	*this = inst;
	return ;
}
Cat::~Cat() {
	std::cout << YEL << "Cat::destructor called\n" << DFT;
	return ;
}
void	Cat::makeSound() const{
	std::cout << "Cat::Nya-on Nya-on\n";
}