/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:03:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/08 14:22:20 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char *av[]) {
	if (ac == 2) {
		Harl instance;

		instance.complain(av[1]);
	} else std::cout << RED << "DO NOT DO STUPID THINGS!" << DFT << std::endl;
	return (0);
}