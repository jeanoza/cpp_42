/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:41:26 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/15 12:45:57 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//TODO:remove this on push
// #include <iomanip>

int main( void ) {
	Point p1;
	Point p2(Fixed(2.4f), Fixed(3.6f));
	Point p3(p2);
	return 0;
}

