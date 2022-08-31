/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:08:23 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/08/31 18:27:00 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;
	public:
		/* canonical form */
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExec);
		Form(const Form &inst);
		~Form();
		Form	&operator=(const Form &rhs);

		/* getters */
		const std::string	getName() const;
		bool				getIsSigned() const;
		const int			getGradeToSign() const;
		const int			getGradeToExec() const;

		/* member functions */
		bool	beSigned(const Bureaucrat &bInst);
		void	signForm();

		/* exceptions class's methode overriding */
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
};

/* operator overloading */
std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif