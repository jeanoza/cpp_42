/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:31:16 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/13 17:46:14 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/* constructor */
Fixed::Fixed(void) : _raw(0) {
	std::cout << BLU << "Fixed: Default constructor called" << DFT << std::endl;
	return ;
}
Fixed::Fixed(int const raw) : _raw(raw) {
	std::cout << BLU << "Fixed: Parametic constructor called" << BLU << "(int)" <<  DFT << std::endl;
	// this->_raw = raw;
	// this->_raw = this->_raw << Fixed::_bit;
	return ;
}
Fixed::Fixed(float const raw) {
	std::cout << BLU << "Fixed: Parametric constructor called" << YEL << "(float)" <<  DFT << std::endl;
	this->_raw = (int)raw;
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

/* other functions */
float	Fixed::toFloat(void) const {
	return this->_raw << Fixed::_bit;
}
int		Fixed::toInt(void) const {
	return this->_raw >> Fixed::_bit;
}

/* no member zone */
int const Fixed::_bit = 8;

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.getRawBits();
	return o;
}