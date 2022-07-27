/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:52:30 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/27 22:42:39 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

class PhoneBook {

	public:

		PhoneBook(void); //constructor
		~PhoneBook(void); //destructor

		//getters
		int getId(void) const;
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;

	private:
		int id;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif