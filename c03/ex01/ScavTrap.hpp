/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:13:35 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/19 18:37:37 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"


//FIXME: ca sert a rien de overwrite copy constructor and copy assignation ici.
class ScavTrap : public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(const std::string name);
		// ScavTrap(const ScavTrap &inst);
		~ScavTrap(void);

		// ScavTrap	&operator=(const ScavTrap &rhs);

		/* member function */
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	guardGate();
};

/* ostream overloading */
std::ostream &operator<<(std::ostream &o, const ScavTrap &rhs);

#endif