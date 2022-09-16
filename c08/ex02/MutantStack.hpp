/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:07:46 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/16 10:21:02 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# ifndef COLOR
#  define RED "\033[0;31m"
#  define GRN "\033[0;32m"
#  define YEL "\033[0;33m"
#  define BLU "\033[0;34m"
#  define MAG "\033[0;35m" //purple
#  define CYN "\033[0;36m" //emerald
#  define WHT "\033[0;37m"
#  define DFT "\033[0m"
# endif


# include <iostream>
# include <string>
# include <limits>
# include <iomanip>
# include <stack>


template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typename std::stack<T>::container_type::iterator  begin() {
			return std::stack<T>::c.begin();
		}
		typename std::stack<T>::container_type::iterator  end() {
			 return std::stack<T>::c.end();
		}
};

template <typename T>
void printStack(MutantStack<T> &stack, const char *name, const char *color) {
	MutantStack<int>::iterator it = stack.begin();
	std::cout << color << "\n[ " << name << " ]: { ";
	for (;it != stack.end(); ++it) std::cout << *it << (it + 1 != stack.end() ? ", " : " }");
	std::cout << DFT << std::endl;
}

#endif

