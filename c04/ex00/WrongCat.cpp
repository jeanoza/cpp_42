/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:17 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/23 08:34:52 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//TODO: diff with nextline?
WrongCat::WrongCat() {
	std::cout << YEL << "WrongCat::default constructor called\n" << DFT;
	this->type = "WrongCat";
	return ;
}
//TODO: diff with nextline?
WrongCat::WrongCat(const WrongCat &inst) {
	std::cout << YEL << "WrongCat::copy constructor called\n" << DFT;
	*this = inst;
	return ;
}
WrongCat::~WrongCat() {
	std::cout << YEL << "WrongCat::destructor called\n" << DFT;
	return ;
}
void	WrongCat::makeSound() const{
	std::cout << "Cat::Nya-on Nya-on\n";
}