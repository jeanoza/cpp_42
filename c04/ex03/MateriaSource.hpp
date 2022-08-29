/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:43:25 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/29 17:52:08 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "main.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp"



class MateriaSource : public IMateriaSource {
	private:
		AMateria	*_list[LIST_MAX_LENGTH];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &inst);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &rhs);

		void		learnMateria(AMateria*);
		AMateria*	createMateria(const std::string &type);
};

#endif