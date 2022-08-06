/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:06:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/05 13:09:41 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	private:
		std::string _type;

	public:
		/* constructor */
		Weapon(void);
		Weapon(std::string const &type); 
		/* destructor */
		~Weapon(void);

		/* Getter */
		std::string const & getType(void) const;
		/* Setter */
		void	setType(std::string const &type);
};

#endif