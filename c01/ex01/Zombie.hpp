/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:06:10 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 13:13:27 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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

class Zombie {
	public:
		Zombie(void);//constructor
		Zombie(std::string name); //constructor with name
		~Zombie(void);//destructor

		/* Getter */
		static int	getSize(void);
		std::string getName(void) const;
		/* Setter */
		void		setName(std::string name);

		/* etc method */
		void		announce(void);
		
	private:
		std::string _name;
		static int	_size;

};

Zombie*    zombieHorde( int N, std::string name );

#endif