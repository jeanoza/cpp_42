/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:07:42 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/05 13:37:54 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		std::string	_name;
		Weapon 		&_weapon;

	public:
		/* constructor */
		HumanA(void);
		HumanA(std::string name, Weapon &weapon);
		/* destructor */
		~HumanA(void); 

		void attack(void);
};

#endif