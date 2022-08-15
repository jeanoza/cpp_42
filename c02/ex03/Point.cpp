/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:51:12 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/15 13:34:08 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* constructors */
Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)) {
	std::cout << "\nPoint: Default constructor called ("
		<< this->_x << ", " << this->_y << ")" << std::endl;
	return ;
}
Point::Point(float const x, float const y) : _x(x), _y(y) {
	std::cout << "\nPoint: Parametric constructor called (" 
		<< this->_x << ", " << this->_y << ")" << std::endl;
	return ;
}
Point::Point(Point const &inst) :_x(inst._x), _y(inst._y){
	std::cout << "\nPoint: Parametric constructor called ("
		<< this->_x << ", " << this->_y << ")" << std::endl;
	return ;
}

/* destructor */
Point::~Point(void) {
	std::cout << "\nPoint: destructor called (" 
		<< this->_x << ", " << this->_y << ")" << std::endl;
	return ;
}

/* Copy Assignation */
Point &Point::operator=(Point const &rhs) {
	if (this->_x != rhs._x || this->_y != rhs._y) *this = Point(rhs._x.toFloat(), rhs._y.toFloat());
	std::cout << "\nPoint: Copy assignation called ("
		<< this->_x << ", " << this->_y << ")" << std::endl;
	return *this;
}

/* Getters */
Fixed const &Point::getX(void) const {
	return this->_x;
}
Fixed const &Point::getY(void) const {
	return this->_y;
}

