/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:39:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/08 15:11:18 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* static zone */
Harl::func		Harl::funcs[FUNC_NUM] = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
std::string Harl::func_names[FUNC_NUM] = {"DEBUG", "INFO", "WARNING", "ERROR"};


/* constructor */
Harl::Harl(void) {
	std::cout << "Harl: constructor called" << std::endl;
}
/* destructor */
Harl::~Harl(void) {
	std::cout << "Harl: destructor called" << std::endl;
}

/* private funcs */
void Harl::debug(void) {
	std::cout << GRN << "[debug]debug is debug...\n" << DFT << std::endl;
}
void Harl::info(void) {
	std::cout << BLU << "[info]info is info...\n" << DFT << std::endl;
}
void Harl::warning(void) {
	std::cout << YEL << "[warning]warning is warning...\n" << DFT << std::endl;
}
void Harl::error(void) {
	std::cout << RED << "[error]error is error...\n" << DFT << std::endl;
}

/* public funcs */
void Harl::complain(std::string level) {
	for (int i = 0; i < FUNC_NUM; ++i) {
		if (level == Harl::func_names[i]) {
			func current_func = funcs[i];
			(this->*current_func)();
			return ;
		}
	}
	std::cout << RED << "\"" << level << "\""
		<< " is not a command in the entries!\n" 
		<< "Commands : [DEBUG | INFO | WARNING | ERROR]\n" 
		<< DFT << std::endl;
}
