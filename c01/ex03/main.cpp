/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:06:23 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 10:44:20 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		std::cout << "\n= = = = = = = = Human A scope = = = = = = = = =\n";
		Weapon  club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		std::cout << "\n= = = = = = = = = = = = = = = = = = = = =\n";
	}
	{
		std::cout << "\n= = = = = = = = Human B scope = = = = = = = = =\n";
		Weapon  club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		std::cout << "\n= = = = = = = = = = = = = = = = = = = = =\n";
	}
	return 0;
}
