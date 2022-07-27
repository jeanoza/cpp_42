/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:59:48 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/27 23:37:33 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(int ac, char *av[]) {
	if (ac == 2) {
		std::string option(av[1]);
		if (option.compare("ADD") == 0) {

		}
		else if (option.compare("SEARCH") == 0) {

		}
		else if (option.compare("EXIT") == 0) {
			printf("exit");

		}
	}
	return (0);
}