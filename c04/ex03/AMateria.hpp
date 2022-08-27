/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:02:58 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/27 13:40:08 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include "main.hpp"

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
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif