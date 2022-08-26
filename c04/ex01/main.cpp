/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:46:33 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 16:08:00 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	std::cout << "\n\nTEST BASIC:\n";
	{
		std::cout << YEL << "\n= = = = = = = = Test right classes = = = = = = = =\n" << DFT;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		meta->makeSound();
		i->makeSound(); //will output the cat sound!
		j->makeSound();

		std::cout << YEL << "\n= = = = = = = = Free right classes = = = = = = = =\n" << DFT;
		delete meta;
		delete j;
		delete i;
	}
	std::cout << "\n\nTEST DEEP COPY:\n";
	Cat basic;
	{
		Cat tmp = basic;
		std::cout << "tmp:	" << tmp.getBrain() << std::endl;
		std::cout << "basic:	" << basic.getBrain() << std::endl;
	}
	//FIXME: test with valgrind for leaks:)
	//FIXME: remove this in linux os
	system("leaks Brain");
	
	return 0;
}