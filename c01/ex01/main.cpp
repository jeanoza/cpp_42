/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:05:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/31 16:38:44 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie *list = zombieHorde(10, "testZombie");

	/* Test to see if all zombies have a name and announce work well */
	for (int i = 0; i < Zombie::getSize(); ++i) list[i].announce();

	/* Destroy all zombies */
	delete [] list;

	return (0);
}