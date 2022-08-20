/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:47:07 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/20 12:26:19 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	
	/* member functions */
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	/* Only FragTrap */
	void	highFivesGuys(void);
};

#endif