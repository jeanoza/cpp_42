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
	int i = 0;
	while (i < 5) {
		std::cout << CYN << entries[i] << ": " << DFT;
		getline(std::cin, tmp);
		if (i == 0) this->setFirstName(tmp);
		else if(i == 1) this->setLastName(tmp);
		else if(i == 2) this->setNickName(tmp);
		else if(i == 3) this->setPhoneNumber(tmp);
		else if(i == 4) this->setDarkestSecret(tmp);
		if (tmp.length()) ++i;
		else std::cout << RED << "Each field cannot be empty!\n" << DFT << std::endl;
	}
	std::cout << YEL << "\n- - - - - - - - - - - - - - - - - -\n"
			<< "Registered in index " << *index << "\n"
			<< "- - - - - - - - - - - - - - - - - -"
			<< DFT << std::endl;
	this->isEmpty = false;
	*index = (*index + 1) % MAX_CONTACT;
}

void	hello (std::string str) {
	int space = 10 - str.length();
	for (int i = 0; i < space; ++i) std::cout << " ";
	if (space <= 0) std::cout << str.substr(0, 9) << '.';
	else std::cout << str;
}

void	Contact::show(void) {
	if (this->isEmpty == false) {
		std::cout << "     " << this->getIndex() << " | ";
		hello(this->getFirstName());
		std::cout << " | ";
		hello(this->getLastName());
		std::cout << " | ";
		hello(this->getNickName());
		std::cout << std::endl;
	}
}

void	Contact::showDetail(void) {
	std::cout << "\n- - - - - - - - - - - - - - - - - -" << std::endl;
	std::cout << "First name: "<< this->getFirstName() << std::endl;
	std::cout << "Last name: "<< this->getLastName() << std::endl;
	std::cout << "Nick name: "<< this->getNickName() << std::endl;
	std::cout << "Phone number: "<< this->getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: "<< this->getDarkestSecret() << std::endl;
	std::cout << "- - - - - - - - - - - - - - - - - -" << std::endl;
}

int Contact::_length = 0;
