/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:17 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 11:00:46 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << YEL << "WrongCat::default constructor called\n" << DFT;
	this->type = "WrongCat";
	return ;
}
WrongCat::WrongCat(const WrongCat &inst) {
	std::cout << YEL << "WrongCat::copy constructor called\n" << DFT;
	*this = inst;
	return ;
}
WrongCat::~WrongCat() {
	std::cout << YEL << "WrongCat::destructor called\n" << DFT;
	return ;
}
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	std::cout << YEL << "WrongCat::copy assignation called\n" << DFT;
	if (this->type != rhs.type) this->type = rhs.type;
	return (*this);
}
void	WrongCat::makeSound() const{
	std::cout << "Cat::Nya-on Nya-on\n";
}