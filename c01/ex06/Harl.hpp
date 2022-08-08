/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:23:21 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/08 15:10:30 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

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

#define FUNC_NUM 4

# include <iostream>

class Harl {
	private:
		static	std::string func_names[FUNC_NUM];
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	findCommand(unsigned int index, std::string level);

	public:
		Harl(void);
		~Harl(void);

		void complain(std::string level);
};
#endif