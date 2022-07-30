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
	this->isEmpty = true;
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
// Contact	Contact::getByIndex(int index) {
// 	return Contact::_list[index];
// }
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
void	Contact::add(int *index) {
	std::string	entries[5] = {
		"First name",
		"Last name",
		"Nick name",
		"Phone number",
		"Darkest secret",
	};
	std::string tmp;
	for (int i = 0; i < 5; i++) {
		std::cout << entries[i] << ": ";
		getline(std::cin, tmp);
		if (i == 0) this->setFirstName(tmp);
		else if(i == 1) this->setLastName(tmp);
		else if(i == 2) this->setNickName(tmp);
		else if(i == 3) this->setPhoneNumber(tmp);
		else if(i == 4) this->setDarkestSecret(tmp);
	}
	std::cout << "Registered" << std::endl << std::endl;
	this->isEmpty = false;
	*index = (*index + 1) % MAX_CONTACT;
}

void	Contact::show(void) {
	if (this->isEmpty == false) {
		std::cout << this->getIndex() << "|";
		std::cout << this->getFirstName() << "|";
		std::cout << this->getLastName() << "|";
		std::cout << this->getNickName() << "|" << std::endl << std::endl;
	}
}

void	Contact::showDetail(void) {
	std::cout << "First name: "<< this->getFirstName() << std::endl;
	std::cout << "Last name: "<< this->getLastName() << std::endl;
	std::cout << "Nick name: "<< this->getNickName() << std::endl;
	std::cout << "Phone number: "<< this->getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: "<< this->getDarkestSecret() << std::endl;
	std::cout << "==================" << std::endl << std::endl;
}

int Contact::_length = 0;
