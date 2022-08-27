/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:46:33 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 17:57:40 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	std::cout << "\n\nTEST BASIC:\n";
	{
		std::cout << YEL << "\n= = = = = = = = Test right classes = = = = = = = =\n" << DFT;
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		//Error : because abstrait class cannot have a instance.
		// const AAnimal meta = new AAnimal();
		
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound();

		std::cout << YEL << "\n= = = = = = = = Free right classes = = = = = = = =\n" << DFT;
		delete j;
		delete i;
	}
	std::cout << "\n\nTEST DEEP COPY:\n";
	Dog basic;
	Brain *basicBrain = basic.getBrain();
	basicBrain->setIdeaById(0, "I think therefore I am.");
	{
		Dog tmp = basic;
		
		Brain *tmpBrain = tmp.getBrain();
		std::cout << "\n\n\t1.TEST Memory address: \n";
		std::cout << "\tbasicBrain: " << basicBrain << std::endl;
		std::cout << "\ttmpBrain:	" << tmpBrain << std::endl;
;
		std::cout << "\tbasicBrain->getIdeaById(0): " << basicBrain->getIdeaById(0) << std::endl;
		std::cout << "\ttmpBrain->getIdeaById(0):	" << tmpBrain->getIdeaById(0) << std::endl;

		std::cout << "\n\n\t2.TEST value in brain string:\n";
		tmpBrain->setIdeaById(0, "Existence procedes essence.");
		std::cout << "\tbasicBrain->getIdeaById(0): " << basicBrain->getIdeaById(0) << std::endl;
		std::cout << "\ttmpBrain->getIdeaById(0):	" << tmpBrain->getIdeaById(0) << std::endl;

		std::cout << "\n\n";

	}
	//FIXME: test with valgrind for leaks:)
	//FIXME: remove this in linux os
	// system("leaks Abstract");
	
	return 0;
}
