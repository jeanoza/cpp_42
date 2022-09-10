/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/10 11:51:43 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

const char *NonDisplayableException::what() const throw() {
	return "Non displayable";
}

const char *ImpossibleException::what() const throw() {
	return "impossible";
}


char	testChar(const std::string str, long long int num) {
	if (str == "nan" || str == "nanf" || (num > std::numeric_limits<char>::max() || num < std::numeric_limits<char>::min()))
		throw ImpossibleException();
	// //non display detect
	if (num < 32 || num > 126)
		throw NonDisplayableException();

	return static_cast<char>(num);
}

int		testInt(const std::string str, long long int num) {
	if (str == "nan" || str == "nanf" || num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
		throw ImpossibleException();
	return static_cast<int>(num);
}

float	testFloat(const std::string str, long double num_d) {

	// manage infinity
	if (str == "inf" || str == "inff") return std::numeric_limits<float>::infinity();
	if (str == "-inf" || str == "-inff") return (-1) * std::numeric_limits<float>::infinity();
	//nan
	if (str == "nan" || str == "nanf") return std::numeric_limits<float>::quiet_NaN();
	//overflow
	if (str != "0" && (num_d > std::numeric_limits<float>::max() || num_d < std::numeric_limits<float>::min()))
		throw ImpossibleException();
	return static_cast<float>(num_d);
}

double	testDouble(const std::string str, long double num_d) {
	// manage infinity
	if (str == "inf" || str == "inff") return std::numeric_limits<double>::infinity();
	if (str == "-inf" || str == "-inff") return (-1) * std::numeric_limits<double>::infinity();
	//nan
	if (str == "nan" || str == "nanf") return std::numeric_limits<double>::quiet_NaN();
	//overflow
	if (str != "0" && (num_d > std::numeric_limits<double>::max() || num_d < std::numeric_limits<double>::min()))
		throw ImpossibleException();
	return static_cast<double>(num_d);
}

int main(int ac, char **av) {

	char _c;
	int _i;
	float _f;
	double _d;

	if (ac == 2)
	{
		char *_end;
		std::string _str = av[1];
		long long int _num = std::strtoll(_str.c_str(), &_end, 0);
		long double _num_d = std::strtold(_str.c_str(), &_end);

		

		/* char */
		try {
			std::cout << "char: ";
			_c = testChar(_str, _num);
			std::cout << _c  << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		/* int */
		try {
			std::cout << "int: ";
			_i = testInt(_str, _num);
			std::cout << _i << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		/* float */
		try {
			std::cout << "float: ";
			_f = testFloat(_str, _num_d);
			std::cout << _f << (_f == _i ? ".0f" : "f") << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what();
			std::cout << std::endl;
		}

		/* double */
		try {
			std::cout << "double: ";
			_d = testDouble(_str, _num_d);
			std::cout << _d << (_d == _i ? ".0" : "" )<< std::endl;
		} catch (std::exception &e) {
			std::cout << e.what();
			std::cout << std::endl;
		}
	}
	return 0;
}



	// int _num = std::atoi(input);
	// float _num_f = std::atof(input);
	//overflow with atoi - itoa
	// if (str != std::to_string(_num) && static_cast<int>(_num_d) != _num)
	// 	throw ImpossibleException();


	//exemple ./convert 123421.123412341