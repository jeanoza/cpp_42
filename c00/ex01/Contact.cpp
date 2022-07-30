/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:46:14 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/30 11:17:59 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* Constructor */
Contact::Contact(void) {
	std::cout << "Constructor called" << std::endl;
	this->_index = Contact::_length;
	Contact::_length += 1;
}
/* Destructor */
Contact::~Contact(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* Getters */
int	Contact::getLength(void) {
	return Contact::_length;
}
Contact	Contact::getByIndex(int index) {
	return Contact::_list[index];
}
int			Contact::getIndex(void) const {
	return this->_index;
}
std::string Contact::getFirstName(void) const {
	return this->_firstName;
}
std::string Contact::getLastName(void) const {
	return this->_lastName;
}
std::string Contact::getNickName(void) const {
	return this->_nickName;
}
std::string Contact::getPhoneNumber(void) const {
	return this->_phoneNumber;
}
std::string Contact::getDarkestSecret(void) const {
	return this->_darkestSecret;
}

/* Setters */
void	Contact::setFirstName(std::string firstName) {
	this->_firstName = firstName;
}
void	Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
}
void	Contact::setNickName(std::string nickName) {
	this->_nickName = nickName;
}
void	Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}
void	Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

int Contact::_length = 0;
Contact	Contact::_list[MAX_CONTACT];
