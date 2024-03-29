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
		void mergeVector(int left, int middle, int right);
		void mergeInsertSortVector(int left, int right, int k);
		void insertSortVector(int left, int right);


		//with list
		void mergeSortList(std::list<int>& currentList, int k);
		void insertSortList(std::list<int>& currentList);

	public:
		PmergeMe(const std::vector<int> &unsortedVector);
		PmergeMe(const PmergeMe &inst);
		virtual ~PmergeMe();
		PmergeMe &operator=(const PmergeMe &rhs);

		/* getters */
		const std::vector<int> &getSortedVector() const;
		const std::list<int> &getSortedList() const;

		/* public member functions */
		void sortList(int k);
		void sortVector(int k);

		void printVector();
		void printList();
};

// std::ostream &operator<<(std::ostream &o, PmergeMe const &rhs);