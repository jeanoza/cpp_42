/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:07:58 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/04 10:38:55 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		std::string	_name;
		Weapon 		*_weapon;

	public:
		/* constructor */
		HumanB(void);
		HumanB(std::string name);
		/* destructor */
		~HumanB(void); 

		/* Setter */
		void	setWeapon(Weapon weapon);


		void attack(void);
};

#endif