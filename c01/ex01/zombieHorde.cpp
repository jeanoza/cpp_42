/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:48:20 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/31 16:08:17 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
	Zombie *list = new Zombie[N];
	for (int i = 0; i < N; ++i) list[i].setName(name);
	return list;
}