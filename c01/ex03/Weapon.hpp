/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:06:56 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/04 10:29:21 by kyubongchoi      ###   ########.fr       */
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
		Weapon(std::string type); 
		/* destructor */
		~Weapon(void);

		/* Getter */
		std::string & getTypeRef(void);
		std::string const & getType(void) const;
		/* Setter */
		void	setType(std::string type);
};

#endif