/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:46:51 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/27 09:13:28 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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

#include <iostream>

class Animal {
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &inst);
		virtual ~Animal();

		Animal	&operator=(const Animal &rhs);
		
		/* getter */
		std::string getType() const;
		/* member function */
		virtual void makeSound() const;
};
#endif
