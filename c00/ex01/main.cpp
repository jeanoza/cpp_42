/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:59:48 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 21:41:53 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void) {
	PhoneBook	phonebook;

	std::cout << BLU
			<< "\n- - - - - - - - - - - - - - - - - - - - - - - -\n"
			<< "|             Welcome 42 Contact!             |\n"
			<< "- - - - - - - - - - - - - - - - - - - - - - - -"
			<< DFT <<std::endl;
	/*
	 * DO NOT USE getline and cin >> at the same time in program
	 * It will waste buffer and program won't work as I want
	 */
	int i = 0;
	std::string	option;
	while (42)
	{
		std::cout << GRN <<"\nOption: " << DFT;
		getline(std::cin, option);
		std::cout << std::endl;
		if (std::cin.eof())
			break ;
		if (option.compare("ADD") == 0) phonebook.getList()[i].add(&i);
		else if (option.compare("SEARCH") == 0) phonebook.search();
		else if (option.compare("EXIT") == 0) break;
		else std::cout << RED << "USAGE : [ADD] | [SEARCH] | [EXIT]\n" << DFT << std::endl;
	}
	std::cout << "Bye :)" << std::endl;
	return (0);
}