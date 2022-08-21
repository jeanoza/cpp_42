/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:23:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/21 14:31:14 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

#define COUNT_ATTACK 8
#define COUNT_TAKE_D 3
#define COUNT_REPAIR 3

int main(void) {
	FragTrap a;
	FragTrap b("origin");

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
	
	b.highFivesGuys();


	std::cout << "\n\n= = = = = = = Test assignation operator = = = = = = =\n\n";
	
	FragTrap c = b;

	std::cout << YEL << "\n\nTest repair:\n" << DFT;
	for (int i = 0; i < COUNT_REPAIR; ++i) b.beRepaired(5);
	std::cout << "\n\nFragTrap c(new) - copy of b:\n";
	std::cout << c << std::endl;
	std::cout << "\n\nFragTrap b(old):\n";
	std::cout << b << std::endl;
	
	c.highFivesGuys();



	std::cout << "\n\n= = = = = = = Test copy constructor = = = = = = =\n\n";
	
	FragTrap d(b);

	std::cout << YEL << "\n\nTest repair:\n" << DFT;
	for (int i = 0; i < COUNT_REPAIR; ++i) b.beRepaired(5);
	std::cout << "\n\nFragTrap d(new) - copy of b:\n";
	std::cout << d << std::endl;
	std::cout << "\n\nFragTrap b(old):\n";
	std::cout << b << std::endl;

	d.highFivesGuys();

	std::cout << "\n\n";

	return (0);
}