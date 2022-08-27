/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:46:51 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 18:05:10 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

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
#include "Brain.hpp"

class AAnimal {
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal &inst);
		virtual ~AAnimal();

		AAnimal	&operator=(const AAnimal &rhs);
		
		/* getter */
		std::string getType() const;
		/* member function */
		virtual void makeSound() const = 0;
};
#endif
