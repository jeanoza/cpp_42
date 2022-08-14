/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:31:16 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/14 12:57:35 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* constructor */
Fixed::Fixed(void) : _raw(0) {
	std::cout << BLU << "Fixed: Default constructor called" << DFT << std::endl;
	return ;
}
Fixed::Fixed(Fixed const & inst) {
	std::cout << BLU << "Fixed: Copy constructor called" << DFT << std::endl;
	*this = inst;
	return ;
}

/* destructor */
Fixed::~Fixed(void) {
	std::cout << RED <<  "Fixed: destructor called" << DFT << std::endl;
	return ;
}

/* operator assignation */
Fixed & Fixed::operator=(Fixed const & inst) {
	std::cout << "Fixed: Copy assingation operator called" << std::endl;
	if (this != &inst) this->_raw = inst.getRawBits();
	return (*this);
}

/* getter */
int		Fixed::getRawBits(void) const{
	std::cout << GRN << "Fixed: getRawBits member function called" << DFT << std::endl;
	return this->_raw;
}

/* setter */
void	Fixed::setRawBits(int const raw) {
	this->_raw = raw;
}
