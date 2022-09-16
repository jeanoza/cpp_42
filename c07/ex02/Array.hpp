/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:07:46 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/15 10:11:57 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

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
# include <cstdlib>

template<typename T>
class Array {
	public:
		Array() : _list(NULL), _n(0) { }
		Array(unsigned int n) : _n(n) {
			_list = new T[_n];
			/* initialize by 0 to remove garbage value */
			for (unsigned int i = 0; i < _n; ++i) _list[i] = 0;
		}
		Array(const Array<T> &inst) : _n(inst.size()) {
			_list = new T[_n];
			for (unsigned int i = 0; i < _n; ++i) _list[i] = inst._list[i];
		}
		virtual ~Array(){ delete[] _list; }

		/* operator */
		Array<T> &operator=(const Array<T> &rhs) {
			if (this != &rhs) {
				delete[] _list;
				_n = rhs.size();
				_list = new T[_n];
				for (unsigned int i = 0; i < _n; ++i) _list[i] = rhs._list[i];
				return *this;
			}
		}
		T &operator[](unsigned int index) {
			if (index >= _n)
				throw std::overflow_error("overflow_error::index_out_of_range");
			return _list[index];
		}

		/* member function */
		unsigned int size() const { return _n; }
	private:
		T 		*_list;
		unsigned int _n;

};

#endif
