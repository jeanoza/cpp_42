/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Copy.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:53:47 by kychoi            #+#    #+#             */
/*   Updated: 2022/08/11 14:45:06 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Copy.hpp"

Copy::Copy(void) {
    std::cout << "Default constructor called\n";
}

Copy::Copy(int num) : _num(num) {
    std::cout << "Parametric constructor called\n";
}

Copy::Copy(Copy const & src) {
    std::cout << "Copy constructor called\n";
    *this = src;
}

Copy::~Copy(void) {
    std::cout << "Default destructor called\n";
}

Copy & Copy::operator=(Copy const & rhs) {
    std::cout << "Assignation\n";
    if (this != &rhs) this->_num = rhs.GetNum();
    return *this;
}

// Getter
int Copy::GetNum(void) const {
    return this->_num;
}


int main(void) {
    Copy inst1;
    Copy inst2(42);
    Copy inst3(inst2);

    std::cout << inst1.GetNum() << std::endl;
    std::cout << inst2.GetNum() << std::endl;
    std::cout << inst3.GetNum() << std::endl;

}
