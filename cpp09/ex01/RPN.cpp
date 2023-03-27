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
						if (stack.size() < 2) throw RPN::WrongOrderException(); // add check for stack size
            int num2 = stack.top();

						if (num2 == 0 && c == '/')
							throw RPN::WrongOrderException(); // add check for stack size
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
    
		if (stack.size() != 1) throw RPN::WrongOrderException(); // add check for final stack size
    return stack.top();
}

const char *RPN::WrongOrderException::what() const throw() {
	return "RPN::WrongOrderException";
}
const char *RPN::WrongCharException::what() const throw() {
	return "RPN::WrongCharException";
}
const char *RPN::WrongZeroDivideException::what() const throw() {
	return "RPN::WrongZeroDivideException";
}
// std::ostream &operator<<(std::ostream &o, RPN const &rhs) { }