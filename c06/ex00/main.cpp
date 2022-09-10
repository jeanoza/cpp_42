/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:51:06 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/10 11:39:59 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

const char *NonDisplayableException::what() const throw() {
	return "Non displayable";
}

const char *ImpossibleException::what() const throw() {
	return "impossible";
}


//FIXME: overflow catch on char

char	testChar(const char *input) {
	char *_end;

	long long int _num = std::strtoll(input, &_end, 0);


	std::string str = input;
	

	if (str == "nan" || str == "nanf" || (_num < -128 || _num > 127))
		throw ImpossibleException();
	// //non display detect
	if (_num < 32 || _num > 126)
		throw NonDisplayableException();

	return static_cast<char>(_num);
}

int		testInt(const char *input) {

	char *_end;

	long long int _num = std::strtoll(input, &_end, 0);
	std::string str = input;


	if (str == "nan" || str == "nanf" || _num > std::numeric_limits<int>::max() || _num < std::numeric_limits<int>::min())
		throw ImpossibleException();
	return static_cast<int>(_num);
}

float	testFloat(const char *input) {
	char *_end;

	// long long int _num = std::strtoll(input, &_end, 0);
	long double _num_d = std::strtold(input, &_end);
	// int _num = std::atoi(input);
	// float _num_f = std::atof(input);
	std::string str = input;

	// manage infinity
	if (str == "inf" || str == "inff") return std::numeric_limits<float>::infinity();
	if (str == "-inf" || str == "-inff") return (-1) * std::numeric_limits<float>::infinity();
	//nan
	if (str == "nan" || str == "nanf") return std::numeric_limits<float>::quiet_NaN();
	//overflow
	// if (str != std::to_string(_num) && static_cast<int>(_num_d) != _num)
	if (_num_d > std::numeric_limits<float>::max() || _num_d < std::numeric_limits<float>::min())
		throw ImpossibleException();
	return static_cast<float>(_num_d);
}

double	testDouble(const char *input) {
	char *_end;

	// long long int _num = std::strtoll(input, &_end, 0);
	long double _num_d = std::strtold(input, &_end);

	std::string str = input;

	// manage infinity
	if (str == "inf" || str == "inff") return std::numeric_limits<double>::infinity();
	if (str == "-inf" || str == "-inff") return (-1) * std::numeric_limits<double>::infinity();
	//nan
	if (str == "nan" || str == "nanf") return std::numeric_limits<double>::quiet_NaN();
	//overflow
	// if (str != std::to_string(_num) && static_cast<int>(_num_d) != _num)
	// 	throw ImpossibleException();

	//overflow
	// if (str != std::to_string(_num) && static_cast<int>(_num_d) != _num)
	if (_num_d > std::numeric_limits<float>::max() || _num_d < std::numeric_limits<float>::min())
		throw ImpossibleException();
	return static_cast<double>(_num_d);
}

int main(int ac, char **av) {

	char _c;
	int _i;
	float _f;
	double _d;


	if (ac == 2)
	{
		// std::cout << std::setprecision(20);
		
		/* char */
		try {
			std::cout << "char: ";
			_c = testChar(av[1]);
			std::cout << _c  << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		/* int */
		try {
			std::cout << "int: ";
			_i = testInt(av[1]);
			std::cout << _i << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		/* float */
		try {
			std::cout << "float: ";
			_f = testFloat(av[1]);
			std::cout << _f << (_f == _i ? ".0f" : "f") << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what();
			std::cout << std::endl;
		}

		/* double */
		try {
			std::cout << "double: ";
			_d = testDouble(av[1]);
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