#include "PmergeMe.hpp"
#include <ctime>

bool contains(char *str, char c) {
	for (int i = 0; str && str[i]; ++i) {
		if (str[i] == c) return true;
	}
	return false;
}

bool parse(std::vector<int> &array, int ac, char **av) {
    for (int i = 1; i < ac; i++) {
				if (contains(av[i], '.')) return false;
        int num = atoi(av[i]);
        if (num <= 0) return false;
        array.push_back(num);
    }
		return true;
}

void printVector(const std::vector<int> &array) {
	int size = array.size();
	for(int i = 0; i < size; ++i) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}


int main(int ac, char **av) {
	std::vector<int> unsorted;
	clock_t start, end;
	double tVector, tList;
	int countElement = ac - 1;

	if (ac < 2 || !parse(unsorted, ac, av)){
		std::cerr << RED << "Error" << DFT << std::endl;
		return 1;
	}

	PmergeMe p = PmergeMe(unsorted);
	std::cout << "\n[Before]\n";
	printVector(unsorted);
	std::cout <<  std::endl;


	start = clock(); // returns microseconds
	p.sortVector(10);
	end = clock();
	tVector = static_cast<double>(end - start) / 1000;

	start = clock(); // returns microseconds
	p.sortList(10);
	end = clock();
	tList = static_cast<double>(end - start) / 1000;


	std::cout << "[After]\n";
	p.printVector();
	p.printList();
	std::cout << DFT << std::endl;


	std::cout << "[Performance]" << std::endl;
	std::cout << "Time to process a range of "
		<< countElement << " elements with " << GRN << "<std::vector> :\t"
		<< tVector << " ms" << DFT << std::endl;
	std::cout << "Time to process a range of "
		<< countElement << " elements with " << YEL << "<std::list>   :\t"
		<< tList << " ms" << DFT << std::endl;

	return 0;
}
