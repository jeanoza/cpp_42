#include "RPN.hpp"

int main (int ac, char **av) {
	(void) ac;
	if (av[1]) {
		RPN rpn = RPN(av[1]);
		rpn.parse();
		std::cout << rpn << std::endl;
		std::cout << rpn << std::endl;
	} else std::cout << "no arg" << std::endl;
	
	return 0;
}