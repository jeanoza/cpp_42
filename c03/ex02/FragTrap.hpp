/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:47:07 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/21 14:24:06 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
	FragTrap(void);
	FragTrap(const std::string name);
	FragTrap(const FragTrap &inst);
	~FragTrap(void);
	
	/* member functions */
	void	attack(const std::string &target);
	
	/* Only FragTrap */
	void	highFivesGuys(void);
};

#endif