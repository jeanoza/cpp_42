/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:07:46 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/11 11:52:26 by kyubongchoi      ###   ########.fr       */
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
	T tmp = x;
	x = y;
	y = tmp;
}
template<typename T>
const T &max(const T &x, const T &y) {
	return x > y ? x : y; 
}
template<typename T>
const T &min(const T &x, const T &y) {
	return x < y ? x : y;
}

template<typename T, typename U>
void	swap(T &x, U &y) {
	(void)x;
	(void)y;
	std::cout << "swap::" << RED << "Parameter's type is DIFFERENT!!" << DFT << std::endl;
}
template<typename T, typename U>
void	max(const T &x, const U &y) {
	(void)x;
	(void)y;
	std::cout << "max::" << RED << "Parameter's type is DIFFERENT!!" << DFT << std::endl;
}
template<typename T, typename U>
void	min(const T &x, const U &y) {
	(void)x;
	(void)y;
	std::cout << "min::" << RED << "Parameter's type is DIFFERENT!!" << DFT << std::endl;
}
#endif