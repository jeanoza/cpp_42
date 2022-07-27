/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:46:14 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/27 23:19:52 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

/* Constructor */
PhoneBook::PhoneBook(void) {
	static int	lastIndex = 0;
	this->_index = ++lastIndex;
	std::cout << "Constructor called" << std::endl;
}

/* Destructor */
PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* Getters */
int	PhoneBook::getIndex(void) const {
	return this->_index;
}
std::string PhoneBook::getFirstName(void) const {
	return this->_firstName;
}
std::string PhoneBook::getLastName(void) const {
	return this->_lastName;
}
std::string PhoneBook::getNickName(void) const {
	return this->_nickName;
}
std::string PhoneBook::getPhoneNumber(void) const {
	return this->_phoneNumber;
}
std::string PhoneBook::getDarkestSecret(void) const {
	return this->_darkestSecret;
}
// PhoneBook	PhoneBook::getByIndex(int index) const {

// }

/* Setters */
void	PhoneBook::setFirstName(std::string firstName) {
	this->_firstName = firstName;
}
void	PhoneBook::setLastName(std::string lastName) {
	this->_lastName = lastName;
}
void	PhoneBook::setNickName(std::string nickName) {
	this->_nickName = nickName;
}
void	PhoneBook::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}
void	PhoneBook::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}
