/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:24:18 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/15 13:32:39 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	private:
		Fixed const _x;
		Fixed const _y;
	
	public:
		/* constructor */
		Point(void);
		Point(float const x, float const y);
		Point(Point const &inst);

		/* destructor */
		~Point(void);

		/* copy assignment operator overloading */
		Point &operator=(Point const &rhs);

		/* Getters */
		Fixed const	&getX(void) const;
		Fixed const &getY(void) const;

		/* member functions */
};

#endif