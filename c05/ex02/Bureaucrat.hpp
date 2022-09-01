/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:07:33 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/31 14:43:12 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

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
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string	_name;
		int		_grade;
	
	public:
		/* canonical form */
		Bureaucrat();
		Bureaucrat(const std::string name, const int _grade);
		Bureaucrat(const Bureaucrat &inst);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &rhs);

		/* getters */
		const std::string 	getName() const;
		int		getGrade() const;

		/* member functions */
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form &inst);
		
		/* exceptions class's methode overriding */
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
};
/* ostream overloading */
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif