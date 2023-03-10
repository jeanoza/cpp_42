#include "PmergeMe.hpp"

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

// std::vector<std::string> split(std::string str, char delim) {
//     std::vector<std::string> tokens;
//     int pos = 0;
//     std::string token;
//     while ((pos = str.find(delim)) != static_cast<int>(std::string::npos)) {
//         token = str.substr(0, pos);
//         tokens.push_back(token);
//         str.erase(0, pos + 1);
//     }
//     tokens.push_back(str);
//     return tokens;
// }

// bool parseStr(std::vector<int> &array, char *str) {
// 	array.clear();
// 	std::vector<std::string> tokens = split(str, ' ');

	
// 	int size = tokens.size();
// 	for (int i = 0; i < size; i++) {
// 		int num = atoi(tokens[i].c_str());
// 		if (num <= 0) return false;
// 		array.push_back(num);
// 	}
// 	return true;
// }
void printVector(const std::vector<int> &array) {
	int size = array.size();
	for(int i = 0; i < size; ++i) {
		std::cout << array[i] << ((i == size - 1) ? "\n" : " ");
	}
}

int main(int ac, char **av) {
	std::vector<int> array;

	if (ac < 2 || !parse(array, ac, av)){
		std::cerr << "Error" << std::endl;
		return 1;
	}

	PmergeMe p = PmergeMe(array);
	std::cout << "Before: ";
	printVector(array);

	p.mergeSort(0, array.size() - 1);
	std::cout << "After: ";
	printVector(p.getSortedVector());


	return 0;
}
//to test mac example
// ./PmergeMe `jot -r 3000 1 5000 | tr "\n" " "`   