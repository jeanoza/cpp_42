/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:35:32 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/14 18:36:02 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

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

# include <iostream>
# include <cmath>


class Fixed {
	private:
		int				_raw;
		static int const _bit = 8;

	public:
		/* constructor */
		Fixed(void);
		/* explicit => to prevent automatical casting at constructor */
		explicit Fixed(int const raw);
		explicit Fixed(float const raw);
		Fixed(Fixed const &inst);

		/* destructor */
		~Fixed(void);

		/* operator assignation */
		Fixed 	&operator=(Fixed const &rhs);

		/* getter */
		int		getRawBits(void) const;

		/* setter */
		void	setRawBits(int const raw);

		/* others */
		float	toFloat(void) const;
		int		toInt(void) const;

};

/* ostream overloading */
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif