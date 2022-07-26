/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:52:30 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/25 22:44:39 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

class PhoneBook {

	public:
	int id;
	int	num;
	std::string name;

	PhoneBook(int num, std::string name); //constructor
	~PhoneBook(void); //destructor

	void	bar(void) const;
};

#endif