/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:03:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/08 14:18:20 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char *av[]) {
	(void)av;

	if (ac == 1) {
		Harl instance;

		instance.complain("DEBUG");
		instance.complain("INFO");
		instance.complain("WARNING");
		instance.complain("ERROR");

		/* test idiot */
		instance.complain("N'import quoi");
	} else std::cout << RED << "DO NOT DO STUPID THINGS!" << DFT << std::endl;
	return (0);
}