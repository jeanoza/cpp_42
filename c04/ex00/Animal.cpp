/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:46:42 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 16:01:47 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal::default constructor called\n";
	this->type = "Animal";
	return ;
}
Animal::Animal(const Animal &inst) {
	std::cout << "Animal::copy constructor called\n";
	this->type = inst.type;
	return ;
}
Animal::~Animal() {
	std::cout << "Animal::destructor called\n";
	return ;
}
Animal &Animal::operator=(const Animal &rhs) {
	std::cout << "Animal::copy assignation called\n";
	if (this != &rhs) this->type = rhs.type;
	return *this;
}
std::string	Animal::getType() const{
	return this->type;
}
void	Animal::makeSound() const {
	std::cout << "Animal::I can't make sound...TT.TT\n";
}