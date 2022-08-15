/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:01:04 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/15 14:40:51 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#pragma region Constructors

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

#pragma endregion

/* destructor */
Point::~Point(void) {
	std::cout << "\nPoint: destructor called (" 
		<< this->_x << ", " << this->_y << ")" << std::endl;
	return ;
}

#pragma region Overloading

/* Assignation */
Point &Point::operator=(Point const &rhs) {
	if (*this != rhs) *this = Point(rhs._x.toFloat(), rhs._y.toFloat());
	std::cout << "\nPoint: Copy assignation called ("
		<< this->_x << ", " << this->_y << ")" << std::endl;
	return *this;
}
/* Comparison */
bool Point::operator==(Point const &rhs) {
	return (this->_x == rhs._x && this->_y == rhs._y);
}
bool Point::operator!=(Point const &rhs) {
	return (this->_x != rhs._x || this->_y != rhs._y);
}

#pragma endregion

#pragma region Accessor

/* getter */
Fixed const &Point::getX(void) const {
	return this->_x;
}
Fixed const &Point::getY(void) const {
	return this->_y;
}

#pragma endregion


#pragma region Non-member

/* overload ostream */
std::ostream &operator<<(std::ostream &o, Point const &rhs) {
	o << "<Point> x:" << rhs.getX() << ", y:" << rhs.getY();
	return o;
}

#pragma endregion