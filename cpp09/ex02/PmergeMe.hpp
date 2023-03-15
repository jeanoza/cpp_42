#pragma once

#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>

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
		std::list<int> _sortedList;

		PmergeMe();
		void init(const std::vector<int> &unsortedVector);

		//with vector
		void mergeVector(int l, int m, int r);
		void mergeSortVector(int l, int r);

		//with list
		void mergeList(std::list<int>& leftList, std::list<int>& rightList, std::list<int>& mergedList);
		void mergeSortList(std::list<int>& intList);

	public:
		PmergeMe(const std::vector<int> &unsortedVector);
		PmergeMe(const PmergeMe &inst);
		virtual ~PmergeMe();
		PmergeMe &operator=(const PmergeMe &rhs);

		/* getters */
		const std::vector<int> &getSortedVector() const;
		const std::list<int> &getSortedList() const;

		/* public member functions */
		void sortList();
		void sortVector();

		void printVector();
		void printList();
};

// std::ostream &operator<<(std::ostream &o, PmergeMe const &rhs);