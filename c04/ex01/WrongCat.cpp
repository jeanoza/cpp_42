/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:17 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 16:03:31 by kyubongchoi      ###   ########.fr       */
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
	this->type = inst.type;
	return ;
}

WrongCat::~WrongCat() {
	std::cout << YEL << "WrongCat::destructor called\n" << DFT;
	return ;
}

void	WrongCat::makeSound() const{
	std::cout << "WrongCat::Nya-on Nya-on\n";
}