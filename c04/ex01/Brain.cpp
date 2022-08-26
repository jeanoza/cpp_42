/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:07:27 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 09:13:12 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << CYN << "Brain::default constructor called\n" << DFT;
	return ;
}

Brain::Brain(const Brain &inst) {
	std::cout << CYN << "Brain::copy constructor called\n" << DFT;
	*this = inst;
	return ;
}

Brain::~Brain() {
	std::cout << CYN << "Brain::destructor called\n" << DFT;
	return ;
}


Brain &Brain::operator=(const Brain &rhs) {

	if (this != &rhs) {
		for (int i = 0; i > 100; ++i)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

/* getter */
std::string Brain::getIdeaById(int id) const{
	return this->_ideas[id];
}
std::string *Brain::getAllIdeas() {
	return this->_ideas;
}

/* setter */
void Brain::setIdeaById(int id, const std::string idea) {
	this->_ideas[id] = idea;
}
