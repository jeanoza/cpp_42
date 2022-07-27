/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:52:30 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/27 23:39:37 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

class PhoneBook {

	public:
		PhoneBook(void); //constructor
		~PhoneBook(void); //destructor

		/* Getters */
		int			getIndex(void) const;
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;
		PhoneBook	getByIndex(int index) const;

		/* Setters */
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickName(std::string nickName);
		void		setPhoneNumber(std::string phoneNumber);
		void		setDarkestSecret(std::string darkestSecret);


	private:
		int 		_index;
		std::string	_firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif