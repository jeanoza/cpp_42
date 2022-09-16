/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/16 10:47:14 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


int main(int ac, char **av) {
	(void)ac;
	(void)av;
	{
		std::cout << MAG << "\n\n/* * * * TEST IN SUBJECT * * * */\n" << DFT;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl; //1
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		/* why push_front and pop_front?
		 * Because stack is FILO(First In Last Out)
		 * So, to have same result with Mutant Stack
		 * Should use push_front in list to put value on top
		 * pop_front as same reason.
		 * 
		 * But ! Iterator works from first address to last address
		 * So i use push_back
		 */
		std::cout << MAG << "\n\n/* * * * TEST With list<int> * * * */\n" << DFT;
		std::list<int> mstack;
		mstack.push_front(5);
		mstack.push_front(17);
		std::cout << mstack.front() << std::endl;
		mstack.pop_front();
		std::cout << mstack.size() << std::endl; //1
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		std::cout << MAG << "\n\n/* * * * MY TEST * * * */" << DFT;
		std::cout << "\n\n[ Initialize MutantStack<int> a ]\n";
		MutantStack<int> a;
		for (int i = 0; i < 5; ++i) a.push(i);
		printStack(a, "a", CYN);

		std::cout << "\n\n[ Copy a to MutantStack<int> b ]\n";
		MutantStack<int> b = a;
		printStack(b, "b", YEL);

		std::cout << "\n\n[ a.pop() ]\n";
		a.pop();
		printStack(a, "a", CYN);
		printStack(b, "b", YEL);

		std::cout << "\n\n[ b.push(10) ]\n";
		b.push(10);
		printStack(a, "a", CYN);
		printStack(b, "b", YEL);
	}
	return (0);
}