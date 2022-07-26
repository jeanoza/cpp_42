/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:46:14 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/25 22:48:54 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int const num, std::string const name) : num(num), name(name) {
	static int _id = 0;
	std::cout << "Constructor called" << std::endl;
	this->id = ++_id;

	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

//put const when do not change variable in class
void	PhoneBook::bar(void) const{
	std::cout << "Member function called" << std::endl;
	std::cout << "id: " << this->id
			<< " num: " << this->num
			<< " name: " << this->name << std::endl;
}