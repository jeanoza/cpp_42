/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:00:45 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/02 16:42:21 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &inst);
		~ShrubberyCreationForm();
		//FIXME: see main test2 commented
		// ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

		/* getter */
		std::string getTarget() const;

		/* member function */
		void execute(const Bureaucrat &bInst) const;
};
/* operator overloading */
std::ostream &operator<<(std::ostream &o, const ShrubberyCreationForm &rhs);

#endif