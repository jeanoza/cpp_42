/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:42:49 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/15 11:19:47 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

//just to test inside of class with for_each
void print(const int &n) { std::cout << " " << n << std::endl; };

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n){ }

Span::Span(Span &inst) {
	_n = inst._n;
	_list.clear();

	/* insert(position_dst, position_src_start, position_src_end) */
	_list.insert(_list.begin(), inst._list.begin(), inst._list.end());
}

Span::~Span(){}

Span &Span::operator=(const Span &rhs) {
	if (this != &rhs) {
		_n = rhs._n;
		_list.clear();
		_list.insert(_list.begin(), rhs._list.begin(), rhs._list.end());
	}
	return (*this);
}


void	Span::addNumber(int toAdd) {
	if (_list.size() < _n)
		_list.push_back(toAdd);
	else
		throw Span::RangeException();
	// std::cout << "\n\n[ addNumber ]\n\n";
	// std::for_each(_list.begin(), _list.end(), print);
	// std::cout << ".size():" << _list.size() << std::endl;
}

unsigned int Span::longestSpan () {
	if (_list.size() < 2)
		throw Span::NotEnoughException();

	int _max = *std::max_element(_list.begin(), _list.end());
	int _min = *std::min_element(_list.begin(), _list.end());
	return (_max - _min);
}
unsigned int Span::shortestSpan () {
	if (_list.size() < 2)
		throw Span::NotEnoughException();
	
	std::vector<int> _copy = std::vector<int>(_list);
	std::sort(_copy.begin(), _copy.end());


	//by default res = el[1] - el[0];
	unsigned int res = *(_copy.begin() + 1) - *_copy.begin();

	std::vector<int>::iterator it = _copy.begin() + 2; // start at &(element[2])
	std::vector<int>::iterator ite = _copy.end();

	for (;it != ite; ++it) {
		//tmp = el[2] - el[1] ... el[last] - el[last -1];
		unsigned int tmp = *it - *(it - 1);
		if (tmp < res) res = tmp;
	}
	return (res);
}



const char *Span::RangeException::what() const throw(){
	return "Span::RangeException::cannot add more than _n";
}
const char *Span::NotEnoughException::what() const throw(){
	return "Span::NotEnoughException::_list.size() < 2";
}

