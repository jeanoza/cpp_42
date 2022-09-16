/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:07:46 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/16 00:17:37 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

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
# include <vector>
# include <list>
# include <algorithm>



class Span {
	private:
		unsigned int _n;
		std::vector<int> _list;
		
	public:
		Span();
		Span(unsigned int n);
		Span(Span &inst);
		virtual ~Span();

		Span &operator=(const Span &rhs);

		/* member functions */
		void 	addNumber(const int toAdd);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void	printList();



		class RangeException : public std::exception {
			virtual const char *what() const throw();
		};
		class NotEnoughException : public std::exception {
			virtual const char *what() const throw();
		};
};


#endif


// char * what () {
//         return "Custom C++ Exception";
//     }
