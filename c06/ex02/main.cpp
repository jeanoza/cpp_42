/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/10 14:37:39 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


Base *generate(void) {
	switch (rand() % 3)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
		default:
			return NULL;
	}
}
void identify(Base *p) {
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << BLU << "A" << DFT << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << YEL << "B" << DFT << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << GRN << "C" << DFT << std::endl;
}

void identify(Base &p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << BLU << "A" << DFT << std::endl;
		return ;
	} catch (std::bad_cast &e) {
		std::cout << "\nFail to conversion to A: " << RED <<  e.what() << DFT << std::endl;
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << YEL << "B" << DFT << std::endl;
		return ;
	} catch (std::bad_cast &e) {
		std::cout << "\nFail to conversion to B: " << RED <<  e.what() << DFT << std::endl;
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << GRN << "C" << DFT << std::endl;
		return ;
	} catch (std::bad_cast &e) {
		std::cout << "\nFail to conversion to C: " << RED <<  e.what() << DFT << std::endl;
	}

}
	
int main(int ac, char **av) {
	(void)ac;
	(void)av;

	Base *instance;

	for (int i = 0; i < 10; ++i)
	{
		std::cout << "\n\n[ TEST " << i + 1 << " ]:\n";
		std::cout << "identify(*p): ";

		instance = generate();
		identify(instance);
		std::cout << "identify(&p): ";
		identify(*instance);
		
		delete instance;
	}

	return 0;
}
