/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:07:46 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/10 12:48:27 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

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
# include <cstdlib>
# include <stdint.h>
# include <limits>
#include <iomanip>

struct Data {
	uintptr_t	raw;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif
