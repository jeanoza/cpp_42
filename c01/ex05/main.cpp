/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:03:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/11 11:02:49 by kychoi           ###   ########.fr       */
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
		instance.complain("");

		/* 
		 * I don't need to manage this case
		 * Because it come from error throwed by std::string.
		 * Actually, to manage this i have to use try catch with error class
		 * But, it's not a goal in this exercice.
		 */
		// instance.complain(0);
	} else std::cout << RED << "DO NOT DO STUPID THINGS!" << DFT << std::endl;
	return (0);
}