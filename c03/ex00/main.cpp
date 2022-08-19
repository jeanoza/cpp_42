/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:23:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/19 12:44:21 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a("hello");


	std::cout << YEL << "\n\nTest attack:\n" << DFT;
	for (int i = 0; i < COUNT_ATTACK; i++) a.attack("world");
	std::cout << a << std::endl;
	std::cout << YEL << "\n\nTest take damage:\n" << DFT;
	for (int i = 0; i < COUNT_TAKE_D; ++i) a.takeDamage(3);
	std::cout << a << std::endl;
	std::cout << YEL << "\n\nTest repair:\n" << DFT;
	for (int i = 0; i < COUNT_REPAIR; ++i) a.beRepaired(5);
	std::cout << a << std::endl;

	return (0);
}