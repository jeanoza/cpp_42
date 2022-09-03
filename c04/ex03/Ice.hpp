/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:18:40 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/03 11:26:59 by kychoi           ###   ########.fr       */
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
		virtual ~Ice();

		virtual Ice	*clone() const;// return new AMateria()
		void use(ICharacter &target);
};

#endif