/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:05:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/11 10:30:13 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	/* Create zombie in function and
	 * Destroy it at the outside of this function
	 */
	Zombie *foo = newZombie("Foo");
	foo->announce();
	delete foo;

	/* Create zombie, announce and destroy it at the inside */
	randomChump("Random");
	return (0);
}