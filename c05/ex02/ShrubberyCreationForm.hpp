/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:00:45 by kyubongchoi       #+#    #+#             */
/*   Updated: 2022/09/02 15:09:46 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM
# define SHRUBBERY_CREATION_FORM

# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &inst);
		~ShrubberyCreationForm();

		/* getter */
		std::string getTarget() const;

		/* member function */
		void execute(const Bureaucrat &bInst) const;
};
/* operator overloading */
std::ostream &operator<<(std::ostream &o, const ShrubberyCreationForm &rhs);

#endif