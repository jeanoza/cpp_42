/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:59:48 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 09:56:07 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool isNumber(const std::string s)
{
    for (int i = 0; s[i]; ++i) {
		char ch = s[i];
        if (std::isdigit(ch) == 0)
            return false;
    }
    return true;
}

static void search (Contact list[MAX_CONTACT]) {
	if (list[0].isEmpty) {
		std::cout << RED << "Contact is empty!\n" << DFT <<std::endl;
		return ;
	} 
	std::cout << " index | first name | last name  |  nickname   \n"
				<< "- - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;

	for (int j = 0; j < MAX_CONTACT; ++j) list[j].show();

	/* loop until user put VALID INDEX */
	while (42) {
		std::cout << MAG << "\nChoose a index whose you want see the detail: " << DFT;
		std::string option;
		getline(std::cin, option);

		if (isNumber(option)) {
			int index = atoi(option.c_str());
			if (index >= 0 && index < MAX_CONTACT && !list[index].isEmpty) {
				list[index].showDetail();
				break ;
			}
			else std::cout << RED << option <<" is not valid index!" << DFT <<std::endl;
		}
		else std::cout << RED << option <<" is not valid index!" << DFT <<std::endl;
	}
}
int main(void) {
	Contact		list[MAX_CONTACT];

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
		if (option.compare("ADD") == 0) list[i].add(&i);
		else if (option.compare("SEARCH") == 0) search(list);
		else if (option.compare("EXIT") == 0) break;
		else std::cout << RED << "USAGE : [ADD] | [SEARCH] | [EXIT]\n" << DFT << std::endl;
	}
	std::cout << "Bye :)" << std::endl;
	return (0);
}