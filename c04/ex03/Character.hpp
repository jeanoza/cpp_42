/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:55:22 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/03 11:26:37 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "main.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria 	*_list[LIST_MAX_LENGTH];
		int			_currentIdx;

	public:
		Character();
		Character(const std::string name);
		Character(const Character &inst);
		virtual ~Character();
		Character &operator=(const Character &rhs);

		const std::string &getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif
