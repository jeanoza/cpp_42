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

std::ostream &operator<<(std::ostream &o, RPN const &rhs) {
	o << "input: " << rhs.getInput() << std::endl;
	return o;
}