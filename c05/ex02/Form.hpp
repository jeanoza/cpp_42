/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:08:23 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/02 15:10:19 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	protected:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;
		
	public:
		/* canonical form */
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExec);
		Form(const Form &inst);
		virtual ~Form();
		Form	&operator=(const Form &rhs);

		/* getters */
		const std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;

		/* member functions */
		void			beSigned(const Bureaucrat &bInst);
		virtual void	execute(const Bureaucrat &bInst) const = 0;

		/* exceptions class's methode overriding */
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		class AlreadySigned : public std::exception {
			virtual const char* what() const throw();
		};
		class NotSigned : public std::exception {
			virtual const char* what() const throw();
		};
		class CreateFileFailed : public std::exception {
			virtual const char* what() const throw();
		};
		class ReadFileFailed : public std::exception {
			virtual const char* what() const throw();
		};
};

/* operator overloading */
std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif