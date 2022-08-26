/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:11 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 10:57:44 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal{
	private:
		Brain	*_brain;
	
	public :
		Cat();
		Cat(const Cat &inst);
		~Cat();
		Cat &operator=(const Cat &rhs);

		/* getter */
		std::string getIdeaById(int id) const;

		/* setter */
		void		setIdeaById(int id, const std::string idea);

		/* member function override */
		void makeSound() const;
};
#endif