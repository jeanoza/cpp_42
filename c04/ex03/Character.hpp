/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:55:22 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/29 09:10:47 by kyubongchoi      ###   ########.fr       */
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
		AMateria 	*_list[4];
		int			_currentIdx;

	public:
		Character();
		Character(const std::string name);
		Character(const Character &inst);
		~Character();
		Character &operator=(const Character &rhs);

		const std::string &getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif
