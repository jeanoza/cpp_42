/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:08:48 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/24 14:23:58y kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//prototype: https://en.cppreference.com/w/cpp/algorithm/transform
int main(int ac, char *av[])
{
	for(int i = 1; i < ac; ++i)
	{
		std::string current = av[i];
		std::transform(current.begin(), current.end(), current.begin(), ::toupper);
		std::cout << current;
	}
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}