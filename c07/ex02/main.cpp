/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/11 16:37:05 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


#define MAX_VAL 10
int main(int ac, char **av) {

	(void)ac;
	(void)av;

	{
		std::cout << RED << "\n\n[ 42 MAIN TEST ]\n\n";
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
		std::cout << "\n\n= = = = D O N E = = = =" << DFT << std::endl;
	}
	{
		std::cout << "\n\n[ MY TEST ]\n\n";
		float array_f[5] = {1, 4.2, 42.0f, -42, 0};
		
		::Array<float> test(5);
		std::cout << CYN << "[ origin Array (test) ]\n" << DFT;
		for(int i = 0; i < 5; ++i) std::cout << "[ " << i << " ]: " << test[i] << std::endl;
		for(int i = 0; i < 5; ++i) test[i] = array_f[i];
		std::cout << GRN << "\n... setting with array_f ... \n\n" << DFT;
		for(int i = 0; i < 5; ++i) std::cout << "[ " << i << " ]: " << test[i] << std::endl;

		std::cout << MAG << "\n... coping test2 from test by copy constructor ... \n\n" << DFT;
		::Array<float> test2(test);
		std::cout << CYN << "[ copy Array (test2)]\n" << DFT;
		for(int i = 0; i < 5; ++i) std::cout << "[ " << i << " ]: " << test[i] << std::endl;

		std::cout << BLU << "\n... coping test3 from test2 by copy operator ... \n\n" << DFT;
		::Array<float> test3 = test2;
		std::cout << CYN << "[ copy Array (test3)]\n" << DFT;
		for(int i = 0; i < 5; ++i) std::cout << "[ " << i << " ]: " << test[i] << std::endl;


	}

	
	return 0;
}


