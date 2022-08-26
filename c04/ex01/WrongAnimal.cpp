/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:46:42 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 16:02:24 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal::default constructor called\n";
	this->type = "WrongAnimal";
	return ;
}
WrongAnimal::WrongAnimal(const WrongAnimal &inst) {
	std::cout << "WrongAnimal::copy constructor called\n";
	this->type = inst.type;
	return ;
}
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal::destructor called\n";
	return ;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << "WrongAnimal::copy assignation called\n";
	if (this != &rhs) this->type = rhs.type;
	return *this;
}
std::string	WrongAnimal::getType() const{
	return this->type;
}
void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal::I can't make sound...TT.TT\n";
}