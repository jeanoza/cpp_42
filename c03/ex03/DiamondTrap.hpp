/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:50:34 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/21 14:43:35 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string	_clap_name;
		
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &inst);
		~DiamondTrap(void);

		/* getter */
		std::string	getClapName(void) const;

		/* member functions */
		void	attack(const std::string &target);

		/* Only DiamondTrap */
		void	whoAmI(void);
};

std::ostream &operator<<(std::ostream &o, const DiamondTrap &rhs);

#endif