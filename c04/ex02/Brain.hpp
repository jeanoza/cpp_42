/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:07:29 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/26 17:08:42 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

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

#include <iostream>

class Brain {
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain(const Brain &inst);
		~Brain();
		Brain &operator=(const Brain &rhs);

		/* getter */
		std::string getIdeaById(int id) const;
		/* setter */
		void	setIdeaById(int id, const std::string idea);
};

#endif
