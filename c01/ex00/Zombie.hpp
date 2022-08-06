/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:06:10 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 10:57:23 by kychoi           ###   ########.fr       */
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
	private:
		std::string _name;

	public:
		Zombie(void);//constructor
		Zombie(std::string name); //constructor with name
		~Zombie(void);//destructor

		void	announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif