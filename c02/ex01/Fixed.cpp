/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:31:16 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/14 18:39:16 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* constructor */
Fixed::Fixed(void) : _raw(0) {
	std::cout << "Fixed: Default constructor called" << std::endl;
	return ;
}
Fixed::Fixed(int const raw) : _raw(raw << Fixed::_bit) {
	std::cout << "Fixed: Parametic constructor called" << BLU << "(int)" <<  DFT << std::endl;
	return ;
}

/* why static_cast ?
 * to do not lose binary value at the conversion
 */
/* why raw * (1 << bit) instaed of (raw << _bit) ? 
 * because of type error
 * error: invalid operands to binary expression ('const float' and 'const int')
 */
Fixed::Fixed(float const raw)
	: _raw(static_cast<int> (roundf(raw * (1 << Fixed::_bit)))) {
	std::cout << "Fixed: Parametric constructor called" << YEL << "(float)" <<  DFT << std::endl;
	return ;
}
Fixed::Fixed(Fixed const &inst) {
	std::cout << "Fixed: Copy constructor called" << std::endl;
	*this = inst;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << RED <<  "Fixed: destructor called" << DFT << std::endl;
	return ;
}

/* operator */
Fixed & Fixed::operator=(Fixed const &rhs) {
	std::cout << CYN << "Fixed: Copy assingation operator called" << DFT << std::endl;
	if (this != &rhs) this->_raw = rhs._raw;
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

/* other functions */
float	Fixed::toFloat(void) const {
	return static_cast<float>(this->_raw) / (1 << Fixed::_bit);
}
int		Fixed::toInt(void) const {
	return this->_raw >> Fixed::_bit;
}

/* ostream overloading */
std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return o;
}

