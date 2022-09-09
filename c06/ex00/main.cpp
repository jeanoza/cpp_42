/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/09 19:57:26 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>
#include <iomanip>

const char *NonDisplayableException::what() const throw() {
	return "Non displayable";
}

const char *ImpossibleException::what() const throw() {
	return "impossible";
}


//FIXME: overflow catch on char

char	testChar(const char *input, char **_end) {
	int		_num = static_cast<char>(std::strtol(input, _end, 0));
	float _num_d = std::strtold(input, _end);
	std::string str = input;
	
	// //nan or overflow
	if (str == "nan" || str == "nanf" || (str != std::to_string(_num) && static_cast<int>(_num_d) != _num))
		throw ImpossibleException();
	// //non display detect
	if (_num < 32 || _num > 126)
		throw NonDisplayableException();

	return static_cast<char>(_num);
}

int		testInt(const char *input, char **_end) {
	int _num = std::strtol(input, _end, 0);
	float _num_d = std::strtof(input, _end);
	std::string str = input;

	// //nan or overflow
	if (str == "nan" || str == "nanf" || (str != std::to_string(_num) && static_cast<int>(_num_d) != _num))
		throw ImpossibleException();
	return static_cast<int>(_num);
}

float	testFloat(const char *input, char **_end) {
	long long int _num = std::strtoll(input, _end, 0);
	long double _num_d = std::strtold(input, _end);
	std::string str = input;

	// manage infinity
	if (str == "inf" || str == "inff") return std::numeric_limits<float>::infinity();
	if (str == "-inf" || str == "-inff") return (-1) * std::numeric_limits<float>::infinity();
	//nan
	if (str == "nan" || str == "nanf") return std::numeric_limits<float>::quiet_NaN();
	//overflow
	if (str != std::to_string(_num) && static_cast<int>(_num_d) != _num)
		throw ImpossibleException();
	return static_cast<float>(_num_d);
}

double	testDouble(const char *input, char **_end) {
	long long int _num = std::strtoll(input, _end, 0);
	long double _num_d = std::strtold(input, _end);
	std::string str = input;

	// manage infinity
	if (str == "inf" || str == "inff") return std::numeric_limits<double>::infinity();
	if (str == "-inf" || str == "-inff") return (-1) * std::numeric_limits<double>::infinity();
	//nan
	if (str == "nan" || str == "nanf") return std::numeric_limits<double>::quiet_NaN();
	//overflow
	if (str != std::to_string(_num) && static_cast<int>(_num_d) != _num)
		throw ImpossibleException();
	return static_cast<double>(_num_d);
}

int main(int ac, char **av) {


	if (ac == 2)
	{
		char *_end;

		/* char */
		try {
			std::cout << "char: ";

			std::cout << testChar(av[1], &_end) << std::endl;

		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		/* int */
		try {
			std::cout << "int: ";
			std::cout << testInt(av[1], &_end) << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		//FIXME: inf, overflow etc 0.f remove

		/* float */
		try {
			std::cout << "float: ";
			std::cout << testFloat(av[1], &_end) << ((*_end == 0 && std::string(av[1]) != "nan")? ".0f":"f") << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what();
			std::cout << std::endl;
		}

		/* double */
		try {
			std::cout << "double: ";
			std::cout << testDouble(av[1], &_end) << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what();
			std::cout << std::endl;
		}
	}
	return 0;
}
