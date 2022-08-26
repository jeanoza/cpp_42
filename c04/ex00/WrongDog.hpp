/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:47:14 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 11:01:32 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_DOG_HPP
# define WRONG_DOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
	public:
		WrongDog();
		WrongDog(const WrongDog &inst);
		~WrongDog();
		WrongDog &operator=(const WrongDog &rhs);

		/* member function override */
		void makeSound() const;

};
#endif