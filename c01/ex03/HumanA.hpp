/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:07:42 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 10:54:19 by kychoi           ###   ########.fr       */
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
		HumanA(std::string name, Weapon &weapon);
		/* destructor */
		~HumanA(void); 

		void attack(void) const;
};

#endif