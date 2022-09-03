/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:23:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/03 08:48:31 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define COUNT_ATTACK 8
#define COUNT_TAKE_D 3
#define COUNT_REPAIR 3

int main(void) {
	ClapTrap a;
	ClapTrap b("origin");

	std::cout << "\n\n= = = = = = = Initial values = = = = = = =\n\n";
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "\n\n= = = = = = = = = = = = = = = = = = = = =\n\n";	

	std::cout << YEL << "\n\nTest attack:\n" << DFT;
	for (int i = 0; i < COUNT_ATTACK; i++) b.attack("world");
	std::cout << b << std::endl;
	std::cout << YEL << "\n\nTest take damage:\n" << DFT;
	for (int i = 0; i < COUNT_TAKE_D; ++i) b.takeDamage(3);
	std::cout << b << std::endl;
	std::cout << YEL << "\n\nTest repair:\n" << DFT;
	for (int i = 0; i < COUNT_REPAIR; ++i) b.beRepaired(5);
	std::cout << b << std::endl;


	std::cout << "\n\n= = = = = = = Test assignation operator = = = = = = =\n\n";
	
	ClapTrap c = b;

	std::cout << YEL << "\n\nTest repair:\n" << DFT;
	for (int i = 0; i < COUNT_REPAIR; ++i) b.beRepaired(5);
	std::cout << "\n\nScavTrap c(new) - copy of b:\n";
	std::cout << c << std::endl;
	std::cout << "\n\nScavTrap b(old):\n";
	std::cout << b << std::endl;


	std::cout << "\n\n= = = = = = = Test copy constructor = = = = = = =\n\n";
	
	ClapTrap d(b);

	std::cout << YEL << "\n\nTest repair:\n" << DFT;
	for (int i = 0; i < COUNT_REPAIR; ++i) b.beRepaired(5);
	std::cout << "\n\nScavTrap d(new) - copy of b:\n";
	std::cout << d << std::endl;
	std::cout << "\n\nScavTrap b(old):\n";
	std::cout << b << std::endl;

	std::cout << "\n\n";

	return (0);
}