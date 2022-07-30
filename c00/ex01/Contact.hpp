/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:52:30 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/07/30 11:16:52 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# ifndef MAX_CONTACT
#  define MAX_CONTACT 8
# endif

#include <iostream>
#include <string>

class Contact {

	// static Contact _list[MAX_CONTACT];
	static int	_length;
	int			_index;
	std::string	_firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
	

	public:
		Contact(void); //constructor
		~Contact(void); //destructor

		bool		isEmpty;

		/* Getters */
		static int	getLength(void);
		// static Contact	getByIndex(int index);
		int			getIndex(void) const;
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;

		/* Setters */
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickName(std::string nickName);
		void		setPhoneNumber(std::string phoneNumber);
		void		setDarkestSecret(std::string darkestSecret);

		/* Options */
		void		add(int *index);
		void		show(void);
		void		showDetail(void);
};
#endif