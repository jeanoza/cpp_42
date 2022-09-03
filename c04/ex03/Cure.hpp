/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:18:40 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/03 11:26:55 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "main.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(const Cure &inst);
		virtual ~Cure();

		virtual Cure*	clone() const;// return new AMateria()
		void use(ICharacter &target);
};

#endif