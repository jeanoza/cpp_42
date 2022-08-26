/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:11 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 17:12:37 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal{
	private:
		Brain	*_brain;
	
	public :
		Cat();
		Cat(const Cat &inst);
		~Cat();

		/* getter */
		Brain *getBrain() const;

		/* member function override */
		void makeSound() const;
};
#endif

