/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:31:16 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/11 14:49:48 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* constructor */
Fixed::Fixed(void) : _raw(0) {
	std::cout << "Fixed: Default constructor called" << std::endl;
}
Fixed::Fixed(char raw) : _raw(raw) {
	std::cout << "Fixed: [char] constructor called" << std::endl;
}
Fixed::Fixed(short raw) : _raw(raw) {
	std::cout << "Fixed: [short] constructor called" << std::endl;
}
Fixed::Fixed(int raw) : _raw(raw) {
	std::cout << "Fixed: [int] constructor called" << std::endl;
}
Fixed::Fixed(long raw) : _raw(raw) {
	std::cout << "Fixed: [long] constructor called" << std::endl;
}
Fixed::Fixed(float raw) : _raw(raw) {
	std::cout << "Fixed: [float] constructor called" << std::endl;
}
Fixed::Fixed(double raw) : _raw(raw) {
	std::cout << "Fixed: [double] constructor called" << std::endl;
}
//FIXME: here
Fixed::Fixed(Fixed const & i) {
	std::cout << "Fixed: [Fixed] constructor called" << std::endl;
}

/* destructor */
Fixed::~Fixed(void) {
	std::cout << "Fixed: destructor called" << std::endl;
	return ;
}

//FIXME:here
/* operator */
Fixed & Fixed::operator=(Fixed const &inst) {
	std::cout << "Fixed: Assingation operator called from " << this->_raw;
	this->_raw = inst.getRawBits();
	return (*this);
}

/* getter */
int		Fixed::getRawBits(void) const{
	return this->_raw;
}

/* setter */
void	Fixed::setRawBits(int const raw) {
	this->_raw = raw;
}