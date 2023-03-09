#include "RPN.hpp"

int main (int ac, char **av) {
	(void) ac;
	if (av[1]) {
		RPN rpn = RPN(av[1]);
		rpn.parse();
		rpn.calculate();
		//std::cout << rpn << std::endl;
	} else std::cout << "no arg" << std::endl;
	
	return 0;
}