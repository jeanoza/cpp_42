#pragma once

#include <iostream>
#include <stack>

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


class RPN {
	private:
		std::string	_input;
		RPN();

		/* private member functions*/
		bool isOperator(char c);
		bool isNumeric(char c);

	public:
		RPN(const std::string &input);
		RPN(const RPN &inst);
		~RPN();
		RPN &operator=(const RPN &rhs);

		class WrongOrderException : public std::exception {
			virtual const char* what() const throw();
		};
		class WrongCharException : public std::exception {
			virtual const char* what() const throw();
		};

		/* member functions */
		int calculate();
};

// std::ostream &operator<<(std::ostream &o, RPN const &rhs);