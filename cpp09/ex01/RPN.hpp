#pragma once

#include <iostream>
#include <stack>

class RPN {
	private:
		const std::string	_input;
		std::stack<int>		_numbers;
		std::stack<char>	_operators;
		int								_result;

		RPN();

		/* private member functions*/
		bool isOperator(char c);
		bool isNumeric(char c);

	public:
		RPN(const std::string &input);
		RPN(const RPN &inst);
		~RPN();
		RPN &operator=(const RPN &rhs);

		/* getters */
		const std::string getInput() const;
		std::stack<int> getNumbers() const;
		std::stack<char> getOperators() const;
		int getResult() const;

		/* member functions */
		void parse();
		void calculate();
};

std::ostream &operator<<(std::ostream &o, RPN const &rhs);