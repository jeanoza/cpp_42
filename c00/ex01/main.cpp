/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:59:48 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/30 13:43:00 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main(void) {
	std::cout << "Welcome 42 Contact!" << std::endl;

	int i = 0;
	while (1)
	{
		std::string option;
		std::cout << "Option: ";
		std::cin >> option;

		if (option.compare("ADD") == 0) {
			printf("add\n");
			std::cout << "name?:";
			std::string firstName;
			std::cin >> firstName;
			Contact::getByIndex(i % 8).setFirstName(firstName);
			std::cout << Contact::getByIndex(i % 8).getFirstName() << std::endl;
		}
		else if (option.compare("SEARCH") == 0) {
			printf("search\n");
		}
		else if (option.compare("EXIT") == 0) {
			printf("exit\n");
			break ;
		}
		++i;
	}

	return (0);
}