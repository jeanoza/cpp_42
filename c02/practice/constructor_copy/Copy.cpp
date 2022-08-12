/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Copy.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:53:47 by kychoi            #+#    #+#             */
/*   Updated: 2022/08/11 15:47:27 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Copy.hpp"

Copy::Copy(void) {
    std::cout << "Default constructor called\n";
}

Copy::Copy(int num) : _num(num) {
    std::cout << "Parametric constructor called : " << this->_num << std::endl;
}

Copy::Copy(Copy const & src) {
    std::cout << "Copy constructor called\n";
    *this = src;
}

Copy::~Copy(void) {
    std::cout << "Default destructor called: " << this->_num << std::endl;
}

Copy & Copy::operator=(Copy const & rhs) {
    std::cout << "Assignation operator called with " << this->_num << std::endl;
    if (this != &rhs) this->_num = rhs.GetNum();
    return *this;
}

// Getter
int Copy::GetNum(void) const {
    return this->_num;
}

std::ostream & operator<<(std::ostream & o, Copy const & rhs) {
    o << rhs.GetNum();
    return o;
}


int main(void) {
    Copy inst1;
    Copy inst2(42);
    Copy inst3(inst2);

    std::cout << "first: " << inst1 << std::endl;
    std::cout << "second: " << inst2 << std::endl;
    std::cout << "third: " << inst3 << std::endl;

    inst2 = Copy(84);
    std::cout << "second-2: " << inst2 << std::endl;
    std::cout << "third-2: " << inst3 << std::endl;


}
