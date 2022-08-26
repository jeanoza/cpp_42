/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:46:42 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 17:13:37 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal::default constructor called\n";
	this->type = "AAnimal";
	return ;
}
AAnimal::AAnimal(const AAnimal &inst) {
	std::cout << "AAnimal::copy constructor called\n";
	this->type = inst.type;
	return ;
}
AAnimal::~AAnimal() {
	std::cout << "AAnimal::destructor called\n";
	return ;
}
AAnimal &AAnimal::operator=(const AAnimal &rhs) {
	std::cout << "AAnimal::copy assignation called\n";
	if (this != &rhs) this->type = rhs.type;
	return *this;
}
std::string	AAnimal::getType() const{
	return this->type;
}
// void	AAnimal::makeSound() const {
// 	std::cout << "AAnimal::I can't make sound...TT.TT\n";
// }