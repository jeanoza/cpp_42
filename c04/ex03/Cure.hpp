/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:18:40 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/28 17:34:04 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "main.hpp"
# include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(const Cure &inst);
		~Cure();

		virtual Cure*	clone() const;// return new AMateria()
		void use(ICharacter &target);
};

#endif