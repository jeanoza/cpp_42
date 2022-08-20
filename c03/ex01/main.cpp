/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:23:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/20 09:37:31 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#define COUNT_ATTACK 8
#define COUNT_TAKE_D 3
#define COUNT_REPAIR 3

int main(void) {
	ScavTrap b("origin");

	std::cout << YEL << "\n\nTest attack:\n" << DFT;
	for (int i = 0; i < COUNT_ATTACK; i++) b.attack("world");
	std::cout << b << std::endl;
	std::cout << YEL << "\n\nTest take damage:\n" << DFT;
	for (int i = 0; i < COUNT_TAKE_D; ++i) b.takeDamage(3);
	std::cout << b << std::endl;
	std::cout << YEL << "\n\nTest repair:\n" << DFT;
	for (int i = 0; i < COUNT_REPAIR; ++i) b.beRepaired(5);
	std::cout << b << std::endl;

	b.guardGate();

	std::cout << "\n\n= = = = = = = Test assignation operator = = = = = = =\n\n";
	
	ScavTrap c = b;

	std::cout << YEL << "\n\nTest repair:\n" << DFT;
	for (int i = 0; i < COUNT_REPAIR; ++i) b.beRepaired(5);
	std::cout << "\n\nScavTrap c(new) - copy of b:\n";
	std::cout << c << std::endl;
	std::cout << "\n\nScavTrap b(old):\n";
	std::cout << b << std::endl;


	std::cout << "\n\n= = = = = = = Test copy constructor = = = = = = =\n\n";
	
	ScavTrap d(b);

	std::cout << YEL << "\n\nTest repair:\n" << DFT;
	for (int i = 0; i < COUNT_REPAIR; ++i) b.beRepaired(5);
	std::cout << "\n\nScavTrap d(new) - copy of b:\n";
	std::cout << d << std::endl;
	std::cout << "\n\nScavTrap b(old):\n";
	std::cout << b << std::endl;

	std::cout << "\n\n";

	return (0);
}