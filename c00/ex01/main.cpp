/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:59:48 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/30 18:42:59 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


static void search (Contact list[MAX_CONTACT]) {
	if (list[0].isEmpty) {
		std::cout << "Contact is empty!" << std::endl;
		return ;
	}
	for (int j = 0; j < MAX_CONTACT; ++j) list[j].show();

	std::cout << "Chose a index whose you want see the detail: ";
	std::string option;
	getline(std::cin, option);

	int index = atoi(option.c_str());
	if (index >= 0 && index < MAX_CONTACT && !list[index].isEmpty) list[index].showDetail();
	else std::cout << "This index is not valid!" << std::endl;
}
int main(void) {
	Contact		list[MAX_CONTACT];

	std::cout << "Welcome 42 Contact!" << std::endl;
	/*
	 * DO NOT USE getline and cin >> at the same time in program
	 * It will waste buffer and program won't work as I want
	 */
	int i = 0;
	std::string	option;
	while (42)
	{
		std::cout << "Option: ";
		getline(std::cin, option);
		if (option.compare("ADD") == 0) {
			list[i].add(&i);
			// i = (i + 1) % MAX_CONTACT;
		}
		else if (option.compare("SEARCH") == 0) search(list);
		else if (option.compare("EXIT") == 0) break ;
	}
	std::cout << "Bye :)" << std::endl;
	return (0);
}