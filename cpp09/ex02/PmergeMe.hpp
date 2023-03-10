#pragma once

#include <iostream>
#include <vector>

# ifndef COLOR
#  define RED "\033[0;31m"
#  define GRN "\033[0;32m"
#  define YEL "\033[0;33m"
#  define BLU "\033[0;34m"
#  define MAG "\033[0;35m" //purple
#  define CYN "\033[0;36m" //emerald
#  define WHT "\033[0;37m"
#  define DFT "\033[0m"
# endif


class PmergeMe {
	private:
		std::vector<int> _sortedVector;

		PmergeMe();

	public:
		PmergeMe(const std::vector<int> &unsortedVector);
		PmergeMe(const PmergeMe &inst);
		~PmergeMe();
		PmergeMe &operator=(const PmergeMe &rhs);

		class WrongOrderException : public std::exception {
			virtual const char* what() const throw();
		};
		class WrongCharException : public std::exception {
			virtual const char* what() const throw();
		};

		/* getters */
		const std::vector<int> &getSortedVector() const;

		/* member functions */
		void init(const std::vector<int> &unsortedVector);
		void mergeVector(int l, int m, int r);
		void mergeSortVector(int l, int r);
};

// std::ostream &operator<<(std::ostream &o, PmergeMe const &rhs);