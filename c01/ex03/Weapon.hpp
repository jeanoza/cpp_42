/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:06:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/31 22:24:53 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	private:
		std::string _type;

	public:
		Weapon(void); /* constructor */
		~Weapon(void); /* destructor */

		/* Getter */
		std::string getType(void);
		/* Setter */
		void	setType(std::string type);
};

#endif