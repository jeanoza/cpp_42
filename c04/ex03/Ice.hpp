/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:18:40 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/27 13:30:53 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "main.hpp"

class Ice : public AMateria{

	public:
		Ice();
		Ice(const Ice &inst);
		~Ice();

		virtual AMateria*	clone() const;// return new AMateria()
};

#endif