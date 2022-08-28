/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:18:40 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/28 17:32:02 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "main.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(const Ice &inst);
		~Ice();

		virtual Ice	*clone() const;// return new AMateria()
		void use(ICharacter &target);
};

#endif