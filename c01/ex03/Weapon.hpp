/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:06:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 13:18:42 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

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

class Weapon {
	private:
		std::string _type;

	public:
		/* constructor */
		Weapon(void);
		// Weapon(std::string const &type); 
		Weapon(std::string const type); 
		/* destructor */
		~Weapon(void);

		/* Getter */
		std::string const & getType(void) const;
		/* Setter */
		void	setType(std::string const type);
};

#endif