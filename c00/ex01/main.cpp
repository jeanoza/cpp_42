/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:59:48 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/25 22:47:35 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book1(42, "Kyubong");
	PhoneBook book2(21, "Meiling");

	book1.bar();
}