/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:30:47 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 21:42:32 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "PhoneBook: constructor called" << std::endl;
}
PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook: donstructor called" << std::endl;
}

Contact	*PhoneBook::getList(void) {
	return this->_list;
}


static bool isNumber(const std::string s) {
    for (int i = 0; s[i]; ++i) {
		char ch = s[i];
        if (std::isdigit(ch) == 0)
            return false;
    }
    return true;
}

void PhoneBook::search (void) {
	if (this->_list[0].isEmpty) {
		std::cout << RED << "Contact is empty!\n" << DFT <<std::endl;
		return ;
	} 
	std::cout << " index | first name | last name  |  nickname   \n"
				<< "- - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;

	for (int j = 0; j < MAX_CONTACT; ++j) this->_list[j].show();

	/* loop until user put VALID INDEX */
	while (42) {
		std::cout << MAG << "\nChoose a index whose you want see the detail: " << DFT;
		std::string option;
		getline(std::cin, option);

		if (isNumber(option)) {
			int index = atoi(option.c_str());
			if (index >= 0 && index < MAX_CONTACT && !this->_list[index].isEmpty) {
				this->_list[index].showDetail();
				break ;
			}
			else std::cout << RED << option <<" is not valid index!" << DFT <<std::endl;
		}
		else std::cout << RED << option <<" is not valid index!" << DFT <<std::endl;
	}
}