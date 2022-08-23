/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_backup.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:46:33 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/23 08:39:06 by kyubongchoi      ###   ########.fr       */
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

	std::cout << "\n\n====== test1 ======\n\n";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	std::cout << "\n\n====== test2 ======\n\n";

	Animal meta2(*meta);
	Animal j2(*j);
	Animal i2 (*i);

	std::cout << meta2.getType() << " " << std::endl;
	std::cout << j2.getType() << " " << std::endl;
	std::cout << i2.getType() << " " << std::endl;
	meta2.makeSound();
	i2.makeSound(); //will output the cat sound!
	j2.makeSound();


	std::cout << "\n\n====== test3 ======\n\n";

	const Animal *meta3 = new Animal();
	const Dog *j3 = new Dog();
	const Cat *i3 = new Cat();

	std::cout << meta3->getType() << " " << std::endl;
	std::cout << j3->getType() << " " << std::endl;
	std::cout << i3->getType() << " " << std::endl;
	meta3->makeSound();
	i3->makeSound(); //will output the cat sound!
	j3->makeSound();


	std::cout << "\n\n====== test4 ======\n\n";

	Animal meta4(*meta3);
	Animal j4(*j3);
	Animal i4(*i3);

	std::cout << meta4.getType() << " " << std::endl;
	std::cout << j4.getType() << " " << std::endl;
	std::cout << i4.getType() << " " << std::endl;
	meta4.makeSound();
	i4.makeSound(); //will output the cat sound!
	j4.makeSound();

	//Free all class dynamic allocated
	std::cout << RED << "\n\n------ FREE dynamic allocation() -----\n\n" << DFT;
	delete meta;
	delete i;
	delete j;
	delete meta3;
	delete j3;
	delete i3;
	std::cout << RED << "\n\n------ FREE stack -----\n\n" << DFT;




	return 0;
}
