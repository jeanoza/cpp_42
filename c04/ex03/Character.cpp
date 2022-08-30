/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:51:17 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/30 16:32:08 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* canonical form */
Character::Character() {
	std::cout << BLU << "Character::default constructor\n" << DFT;
	this->_name = "Unknown";
	_currentIdx = 0;
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) this->_list[i] = NULL;
	return ;
}

Character::Character(const std::string name) {
	std::cout << BLU << "Character::parametric constructor\n" << DFT;
	_currentIdx = 0;
	this->_name = name;
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) this->_list[i] = NULL;
	return ;
}

Character::Character(const Character &inst) {
	std::cout << BLU << "Character::copy constructor\n" << DFT;
	this->_name = inst._name;
	this->_currentIdx = inst._currentIdx;
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) {
		if (inst._list[i]) 
			this->_list[i] = inst._list[i]->clone();
		 else this->_list[i] = NULL;
	}
	return ;
}

Character::~Character() {
	std::cout << BLU << "Character::destructor\n" << DFT;
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) {
		if (this->_list[i]) {
			// std::cout << RED << "Character::copy constructor::" << this->_list[i] << "\n" << DFT;
			// std::cout << RED << "Character::copy constructor::" << this->_list[i]->getType() << "\n" << DFT;
			delete this->_list[i];
		}
	}
	return ;
}

Character &Character::operator=(const Character &rhs) {
	std::cout << BLU << "Character::copy assignation\n" << DFT;
	this->_name = rhs._name;
	this->_currentIdx = rhs._currentIdx;
	for (int i = 0; i < LIST_MAX_LENGTH; ++i) {
		if (rhs._list[i]) this->_list[i] = rhs._list[i]->clone();
	}
	return (*this);
}

/* member functions */
const std::string &Character::getName() const {
	return this->_name;
}
void Character::equip(AMateria *m) {
	// std::cout << RED << _currentIdx << "\n\n" << DFT;
	if (this->_currentIdx < LIST_MAX_LENGTH) {
		this->_list[this->_currentIdx] = m;
		++this->_currentIdx;
	}
}
void Character::unequip(int idx) {
	if (this->_currentIdx > 0) {
		// std::cout << _currentIdx << "\n\n";
		--this->_currentIdx;
		this->_list[idx] = NULL;
		for (int i = 0; i < 4; ++i) {
			if (this->_list[idx] == NULL && this->_list[idx + 1]) {
				this->_list[idx] = this->_list[idx + 1];
				this->_list[idx + 1] = NULL;
			}
		}
	}
}

void Character::use(int idx, ICharacter &target) {
	if (this->_list[idx]) this->_list[idx]->use(target);
}
