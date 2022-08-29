/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:51:17 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/29 09:09:16 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* canonical form */
Character::Character() {
	std::cout << BLU << "Character::default constructor\n" << DFT;
	this->_name = "Unknown";
	return ;
}

Character::Character(const std::string name) {
	std::cout << BLU << "Character::parametric constructor\n" << DFT;
	this->_name = name;
	return ;
}

Character::Character(const Character &inst) {
	std::cout << BLU << "Character::copy constructor\n" << DFT;
	this->_name = inst._name;
	return ;
}

Character::~Character() {
	std::cout << BLU << "Character::destructor\n" << DFT;
	return ;
}

Character &Character::operator=(const Character &rhs) {
	std::cout << BLU << "Character::copy assignation\n" << DFT;
	this->_name = rhs._name;
	return (*this);
}

/* member functions */
const std::string &Character::getName() const {
	return this->_name;
}
void Character::equip(AMateria *m) {
	this->_list[this->_currentIdx] = m;
	++this->_currentIdx;
}
void Character::unequip(int idx) {
	if (_currentIdx > 0) {
		this->_list[idx] = NULL;
		--this->_currentIdx;
		for (int i = 0; i < 4; ++i) {
			if (this->_list[idx] == NULL && this->_list[idx + 1]) {
				this->_list[idx] = this->_list[idx + 1];
				this->_list[idx + 1] = NULL;
			}
		}
	}
}

void Character::use(int idx, ICharacter &target) {
	this->_list[idx]->use(target);
}
