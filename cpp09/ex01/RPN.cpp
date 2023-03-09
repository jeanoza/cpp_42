#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const std::string &input) :_input(input){

}
RPN::RPN(const RPN &inst): _input(inst._input) {
	_numbers = inst.getNumbers();
	_operators = inst.getOperators();
	_result = inst.getResult();
}

RPN::~RPN(){}

RPN &RPN::operator=(const RPN &rhs) {
	_numbers = rhs.getNumbers();
	_operators = rhs.getOperators();
	_result = rhs.getResult();

	return (*this);
}

/* getters */
const std::string RPN::getInput() const{
	return _input;
}

std::stack<int> RPN::getNumbers() const {
	return _numbers;
}
std::stack<char> RPN::getOperators() const{
	return _operators;
}
int RPN::getResult() const{
	return _result;
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

void RPN::parse() {
	for(std::string::const_iterator it = _input.begin(); it != _input.end(); ++it) {
		char current = *it;

		if (isNumeric(current)) _numbers.push(static_cast<int>(current) - 48);
		else if (isOperator(current)) _operators.push(current);
	}
}

void RPN::calculate() {
	//std::cout << _numbers.top() << std::endl;
	while (_numbers.top() != NULL) {
		std::cout << *this << std::endl;

		int res;
		int num1 = _numbers.top();
		_numbers.pop();
		int num2 = _numbers.top();
		_numbers.pop();
		char op = _operators.top();
		_operators.pop();
		if (op == '+') res = num1 + num2;
		else if (op == '-') res = num1 - num2;
		else if (op == '*') res = num1 * num2;
		else if (op == '/') res = num1 / num2;
		else {
			std::cout << "HERE" <<std::endl;
		}
		_numbers.push(res);
	}
}


std::ostream &operator<<(std::ostream &o, RPN const &rhs) {
	o << "input: " << rhs.getInput() << std::endl;

	/* numbers */
	std::stack<int> numbers = rhs.getNumbers();
	o << "numbers: [";
	while (!numbers.empty()) {
		int num = numbers.top();
		o << num;
		numbers.pop();
		if (!numbers.empty()) {
			o << ", ";
		}
	}
	o << "]" << std::endl;

	/* operators */
	std::stack<char> operators = rhs.getOperators();
	o << "operators: [";
	while (!operators.empty()) {
		char oper = operators.top();
		o << oper;
		operators.pop();
		if (!operators.empty()) {
			o << ", ";
		}
	}
	o << "]" << std::endl;
	return o;
}