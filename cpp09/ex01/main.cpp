#include <iostream>
#include <stack>
#include <string>
#include "RPN.hpp"

int main(int ac, char **av) {
		(void)ac;

		if (ac == 2 && av[1]){
			RPN rpn = RPN(av[1]);
			try {
				std::cout << rpn.calculate() << std::endl;
			} catch (std::exception &e) {
				std::cout << RED << "Error" << DFT <<std::endl;
				// std::cout << e.what() << std::endl;
			}
		} else {
			std::cout << YEL << "[Warning] Give me" << RED << " ONE " << YEL << "Reverse Polish Notation" << DFT << std::endl;
			std::cout << GRN << "[Usage] ./RPN '89 * 9 - 9 - 9 - 4 - 1 +'" << DFT << std::endl;
		}
    return 0;
}
