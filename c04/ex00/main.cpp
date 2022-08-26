/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:46:33 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 10:54:16 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"


int main()
{
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
	{

		std::cout << RED << "\n= = = = = = = = Test wrong classes = = = = = = = =\n" << DFT;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongDog();
		const WrongAnimal* i = new WrongCat();
		
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound(); //will output the cat sound!
		j->makeSound();

		std::cout << RED << "\n= = = = = = = = Free wrong classes = = = = = = = =\n" << DFT;
		delete meta;
		delete j;
		delete i;
	}
	{
		
	}
	return 0;
}
