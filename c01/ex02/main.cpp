/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:20:38 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/31 18:48:09 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {

	std::string _string = "HI THIS IS BRAIN";
	std::string *stringPTR = &_string;
	std::string &stringREF = _string;

	std::cout << "_string's address:	" << &_string << std::endl;
	std::cout << "stringPTR's address:	" << stringPTR << std::endl;
	std::cout << "stringREF's address:	" << &stringREF << std::endl;

	std::cout << "= = = = = = = = = = = = = = = = = = = = = = = =\n";

	std::cout << "_string's value:	" << _string << std::endl;
	std::cout << "stringPTR's value:	" << *stringPTR << std::endl;
	std::cout << "stringREF's value:	" << stringREF << std::endl;

	return (0);
}