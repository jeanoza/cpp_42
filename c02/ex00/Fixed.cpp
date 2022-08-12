/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:31:16 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/12 13:36:09 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/* constructor */
Fixed::Fixed(void) : _raw(0) {
	std::cout << BLU << "Fixed: Default constructor called" << DFT << std::endl;
	return ;
}
Fixed::Fixed(int raw) : _raw(raw) {
	std::cout << BLU << "Fixed: Parametric constructor called" << DFT << std::endl;
	return ;
}
Fixed::Fixed(Fixed const & rhs) {
	std::cout << BLU << "Fixed: Copy constructor called" << DFT << std::endl;
	*this = rhs;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << RED <<  "Fixed: destructor called" << DFT << std::endl;
	return ;
}

/* operator */
Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Fixed: Copy assingation operator called" << std::endl;
	if (this != &rhs) this->_raw = rhs.getRawBits();
	return (*this);
}

/* getter */
int		Fixed::getRawBits(void) const{
	std::cout << GRN << "Fixed: getRawBits member function called" << DFT << std::endl;
	return this->_raw;
}
int		Fixed::getBit(void){
	return Fixed::_bit;
}

/* setter */
void	Fixed::setRawBits(int const raw) {
	this->_raw = raw;
}

/* no member zone */
int const Fixed::_bit = 8;

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.getRawBits();
	return o;
}