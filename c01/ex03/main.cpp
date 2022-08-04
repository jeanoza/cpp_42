/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:06:23 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/04 10:27:21 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		std::cout << "\n= = = = = = = = Human A = = = = = = = = =\n";
		Weapon  club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		std::cout << "\n= = = = = = = = = = = = = = = = = = = = =\n";
	}
	{
		std::cout << "\n= = = = = = = = Human B = = = = = = = = =\n";
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
