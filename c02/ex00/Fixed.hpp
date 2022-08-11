/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:35:32 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/11 13:58:21 by kychoi           ###   ########.fr       */
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

class Fixed {
	private:
		int				_raw;
		static int const _bit;

	public:
		/* constructor */
		Fixed(void);
		Fixed(char raw);
		Fixed(short raw);
		Fixed(int raw);
		Fixed(long raw);
		Fixed(float raw);
		Fixed(double raw);
		Fixed(Fixed const & i);

		/* destructor */
		~Fixed(void);

		//FIXME:here
		/* operator */
		Fixed &operator=(Fixed const & inst);

		/* getter */
		int getRawBits(void) const;

		/* setter */
		void setRawBits(int const raw);
};
#endif