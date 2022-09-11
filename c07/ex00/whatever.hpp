/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:07:46 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/11 11:38:19 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# ifndef COLOR
#  define RED "\033[0;31m"
#  define GRN "\033[0;32m"
#  define YEL "\033[0;33m"
#  define BLU "\033[0;34m"
#  define MAG "\033[0;35m" //purple
#  define CYN "\033[0;36m" //emerald
#  define WHT "\033[0;37m"
#  define DFT "\033[0m"
# endif


# include <iostream>
# include <string>
# include <limits>
#include <iomanip>

template<typename T>
void swap(T &x, T &y) {
	std::cout << GRN << "swap(" << x << ", " << y << ")\n" << DFT;
	T tmp = x;
	x = y;
	y = tmp;
}
template<typename T>
const T &max(const T &x, const T &y) {
	std::cout << MAG << "max(" << x << ", " << y << "): " << DFT;
	return x > y ? x : y; 
}
template<typename T>
const T &min(const T &x, const T &y) {
	std::cout << YEL << "min(" << x << ", " << y << "): " << DFT;
	return x < y ? x : y;
}

template<typename T, typename U>
const std::string	swap(T &x, U &y) {
	std::cout << GRN << "swap(" << x << ", " << y << "): " << DFT;
	std::string msg = RED;
	msg += "Parameter's type is DIFFERENT!!";
	msg += DFT;
	return msg;
}
template<typename T, typename U>
const std::string	max(const T &x, const U &y) {
	std::cout << MAG << "max(" << x << ", " << y << "): " << DFT;
	std::string msg = RED;
	msg += "Parameter's type is DIFFERENT!!";
	msg += DFT;
	return msg;
}
template<typename T, typename U>
const std::string	min(const T &x, const U &y) {
	std::cout << YEL << "min(" << x << ", " << y << "): " << DFT;
	std::string msg = RED;
	msg += "Parameter's type is DIFFERENT!!";
	msg += DFT;
	return msg;
}
#endif