/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:57:16 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/30 08:50:57 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << GRN << "MateriaSource:: default constructor\n";
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) this->_list[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &inst) {
	std::cout << GRN << "MateriaSource:: copy constructor\n";
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) this->_list[i] = inst._list[i]->clone();
	return ;
}

MateriaSource::~MateriaSource() {
	std::cout << GRN << "MateriaSource:: destructor\n";
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) {
		if (this->_list[i]) delete this->_list[i];
	}
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	std::cout << GRN << "MateriaSource:: copy assignation\n";
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) {
		this->_list[i] = rhs._list[i]->clone();
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* inst) {
	int currentIndex = 0;

	while (this->_list[currentIndex]) ++currentIndex;
	if (currentIndex < LIST_MAX_LENGTH) {
		this->_list[currentIndex] = inst->clone();
	}
}

AMateria*	MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) {
		if (this->_list[i] && this->_list[i]->getType() == type)
			return this->_list[i]->clone();
	}
	return NULL;
}