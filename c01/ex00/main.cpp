/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:05:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/31 15:42:39 by kyubongchoi      ###   ########.fr       */
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

	/* Create zombie and destroy it at the inside */
	randomChump("Random");
	return (0);
}