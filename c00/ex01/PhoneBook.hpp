/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:15:07 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/06 21:42:39 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# ifndef COLOR
#  define RED "\033[0;31m"
#  define GRN "\033[0;32m"
#  define YEL "\033[0;33m"
#  define BLU "\033[0;34m"
#  define MAG "\033[0;35m" //purple
#  define CYN "\033[0;36m" //emerald
#  define WHT "\033[0;37m"
#  define DFT "\033[0m"
# endif

# ifndef MAX_CONTACT
#  define MAX_CONTACT 8
# endif

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {

	private:
		Contact _list[MAX_CONTACT];

	public:
		PhoneBook(void); //constructor
		virtual ~PhoneBook(void); //destructor

		//Getter
		Contact	*getList(void);

		void search (void);
};

#endif