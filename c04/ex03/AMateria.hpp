/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:02:58 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/03 11:26:47 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include "main.hpp"
# include "ICharacter.hpp"
# include "AMateria.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string	type;
		
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &inst);
		virtual ~AMateria();
		AMateria &operator=(const AMateria &rhs);

		const std::string	&getType() const; //Returns the materia type
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif