/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Copy.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:54:08 by kychoi            #+#    #+#             */
/*   Updated: 2022/08/11 15:35:15 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPY_HPP
# define COPY_HPP
#include <iostream>

class Copy {
    private:
        int _num;
    public:
        Copy(void);
        Copy(int num);
        Copy(Copy const & src); // Copy constructor
        ~Copy(void);

        //Getter
        int GetNum(void) const;

        Copy & operator=(Copy const & rhs);
};

std::ostream & operator<<(std::ostream & o, Copy const & rhs);

#endif