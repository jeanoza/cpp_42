/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:57:16 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/28 18:18:56 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource:: default constructor\n";
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) this->_list[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &inst) {
	std::cout << "MateriaSource:: copy constructor\n";
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) this->_list[i] = inst._list[i];
	return ;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource:: destructor\n";
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) delete this->_list[i];
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	std::cout << "MateriaSource:: copy assignation\n";
	if (this != &rhs)
		for (int i = 0; i < LIST_MAX_LENGTH; ++i) this->_list[i] = rhs._list[i];
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* inst) {
	int currentIndex = 0;

	while (this->_list[currentIndex] && this->_list[currentIndex]->getType().length()) ++currentIndex;
	

	if (currentIndex < LIST_MAX_LENGTH) {
		this->_list[currentIndex] = inst;
	}
}

AMateria*	MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < LIST_MAX_LENGTH; ++i)
		if (this->_list[i] && this->_list[i]->getType() == type) return this->_list[i];
	return NULL;
}