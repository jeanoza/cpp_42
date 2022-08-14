/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:41:26 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/14 18:03:41 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//TODO:remove this on push
// #include <iomanip>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}


//#include <iomanip>
// // comparison operator
// Fixed b(2);
// Fixed a(2.0f);
// std::cout << std::boolalpha;
// std::cout << (a > b) << std::endl;
// std::cout << (a < b) << std::endl;
// std::cout << (a >= b) << std::endl;
// std::cout << (a <= b) << std::endl;
// std::cout << (a == b) << std::endl;
// std::cout << (a != b) << std::endl;

// // arithmetics
// Fixed a(10);
// Fixed b(0.2f);
// std::cout << a + b << std::endl;
// std::cout << a - b << std::endl;
// std::cout << a * b << std::endl;
// std::cout << a / b << std::endl;

// // prefix
// std::cout << std::endl;
// std::cout << ++a << std::endl;
// std::cout << std::endl;
// std::cout << ++b << std::endl;
// std::cout << std::endl;
// std::cout << --a << std::endl;
// std::cout << std::endl;
// std::cout << --b << std::endl;
// std::cout << std::endl;

// // postfix
// std::cout << std::endl;
// std::cout << a++ << std::endl;
// std::cout << std::endl;
// std::cout << b++ << std::endl;
// std::cout << std::endl;
// std::cout << a-- << std::endl;
// std::cout << std::endl;
// std::cout << b-- << std::endl;
