#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(const std::string &input) :_input(input){ }
RPN::RPN(const RPN &inst): _input(inst._input) { }
RPN::~RPN(){}

RPN &RPN::operator=(const RPN &rhs) {
	_input = rhs._input;
	return (*this);
}

/* member functions */
bool RPN::isOperator(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

bool RPN::isNumeric(char c) {
	if (c >= '0' && c <= '9')
		return true;
	return false;
}


int RPN::calculate() {
    std::stack<int> stack;
    
    for (std::string::const_iterator it = _input.begin(); it != _input.end(); ++it) {
				char c = *it;
        if (isNumeric(c)) {
            stack.push(c - '0'); // convert char to int
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            int num2 = stack.top();
						stack.pop();
            int num1 = stack.top();
						stack.pop();
            int res;
            
            switch(c) {
                case '+': res = num1 + num2; break;
                case '-': res = num1 - num2; break;
                case '*': res = num1 * num2; break;
                case '/': res = num1 / num2; break;
            }
            stack.push(res);
        } else if (c != ' ') throw RPN::WrongCharException();
    }
    
    return stack.top();
}

const char *RPN::WrongOrderException::what() const throw() {
	return "RPN::WrongOrderException";
}
const char *RPN::WrongCharException::what() const throw() {
	return "RPN::WrongCharException";
}
// std::ostream &operator<<(std::ostream &o, RPN const &rhs) { }