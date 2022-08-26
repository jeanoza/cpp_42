/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:14 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 16:25:24 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(const Dog &inst);
		~Dog();

		/* getter */
		Brain *getBrain() const;

		/* member function override */
		void makeSound() const;

};
#endif