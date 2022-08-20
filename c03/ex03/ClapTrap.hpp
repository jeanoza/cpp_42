/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:23:52 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/20 12:18:12 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP


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

class ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &inst);
		//TODO:virtual on destructor maybe?
		~ClapTrap(void);

		ClapTrap	&operator=(const ClapTrap &rhs);

		/* getters */
		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;

		/* member functions */
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

/* ostream overloading */
std::ostream &operator<<(std::ostream &o, const ClapTrap &rhs);

#endif