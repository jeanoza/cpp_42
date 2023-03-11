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
		std::cout << array[i] << ((i == size - 1) ? "\n" : " ");
	}
}

void printList(const std::list<int> &array) {
	for(std::list<int>::const_iterator it = array.begin(); it != array.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main(int ac, char **av) {
	std::vector<int> unsorted;
	clock_t start, end;
	double tVector, tList;
	int countElement = ac - 1;

	if (ac < 2 || !parse(unsorted, ac, av)){
		std::cerr << RED << "Error" << std::endl;
		return 1;
	}

	PmergeMe p = PmergeMe(unsorted);
	std::cout << "\n[Before]\n";
	printVector(unsorted);
	std::cout <<  std::endl;


	
	start = clock(); // returns microseconds
	p.mergeSortVector(0, unsorted.size() - 1);
	end = clock();
	tVector = static_cast<double>(end - start) / 1000;

	start = clock(); // returns microseconds
	p.sortList();
	end = clock();
	tList = static_cast<double>(end - start) / 1000;



	std::cout << CYN << "[After]\n";
	printVector(p.getSortedVector());
	std::cout << DFT << std::endl;


	std::cout << "[Performance]" << std::endl;
	std::cout << "Time to process a range of "
		<< countElement << " elements with std::" << GRN << "vector\t\t: "
		<< tVector << " ms" << DFT << std::endl;
	std::cout << "Time to process a range of "
		<< countElement << " elements with std::" << YEL << "list  \t\t: "
		<< tList << " ms" << DFT << std::endl;
	// printList(p.getSortedList());
	return 0;
}
