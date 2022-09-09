/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/07 18:33:23 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>

int main(int ac, char **av) {


	// char a = static_cast<char>(av[1]);

	if (ac == 2)
	{
		std::string _str = av[1];



		int _i = static_cast<int>(std::stoi(_str));
		float _f = static_cast<float>(std::stof(_str));
		double _d = static_cast<double>(std::stod(_str));
		
		// std::cout << _c << std::endl;
		std::cout << _i << std::endl;
		std::cout << _f << std::endl;
		std::cout << _d << std::endl;

	}
	return 0;
}
