#include "PmergeMe.hpp"
#include <iostream>

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const std::vector<int> &unsortedVector) {
  init(unsortedVector);
}
PmergeMe::PmergeMe(const PmergeMe &inst) {
  //FIXME:copy
  (void)inst;
}
PmergeMe::~PmergeMe(){}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
  //FIXME:copy
  (void)rhs;
	return (*this);
}

const std::vector<int> &PmergeMe::getSortedVector() const {
  return _sortedVector;
}
const std::list<int> &PmergeMe::getSortedList() const {
  return _sortedList;
}


/* member functions */
void PmergeMe::init(const std::vector<int> &unsortedVector) {
  int size = unsortedVector.size();
  for (int i = 0; i < size; ++i) {
    int n = unsortedVector[i];
    _sortedVector.push_back(n);
    _sortedList.push_back(n);
  }
}



void PmergeMe::mergeVector(int left, int middle, int right)
{
    int i, j, k;
    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    std::vector<int> leftArray(leftSize);
    std::vector<int> rightArray(rightSize);


    for (i = 0; i < leftSize; i++)
        leftArray[i] = _sortedVector[left + i];
    for (j = 0; j < rightSize; j++)
        rightArray[j] = _sortedVector[middle + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < leftSize && j < rightSize) {
        if (leftArray[i] <= rightArray[j]) _sortedVector[k] = leftArray[i++];
        else _sortedVector[k] = rightArray[j++];
        k++;
    }

    while (i < leftSize) _sortedVector[k++] = leftArray[i++];

    while (j < rightSize) _sortedVector[k++] = rightArray[j++];
}

void PmergeMe::mergeSortVector(int left, int right)
{
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSortVector(left, middle);
        mergeSortVector(middle + 1, right);
        mergeVector(left, middle, right);
    }
}

void PmergeMe::sortVector() {
  mergeSortVector(0, _sortedVector.size() - 1);
}

void PmergeMe::mergeList(std::list<int>& leftList, std::list<int>& rightList, std::list<int>& mergedList)
{
    std::list<int>::iterator itLeft = leftList.begin();
    std::list<int>::iterator itRight = rightList.begin();

    while (itLeft != leftList.end() && itRight != rightList.end()) {
        if (*itLeft <= *itRight) {
            mergedList.push_back(*itLeft);
            itLeft++;
        }
        else {
            mergedList.push_back(*itRight);
            itRight++;
        }
    }

    while (itLeft != leftList.end()) {
        mergedList.push_back(*itLeft);
        itLeft++;
    }

    while (itRight != rightList.end()) {
        mergedList.push_back(*itRight);
        itRight++;
    }
}

void PmergeMe::mergeSortList(std::list<int>& intList)
{
    if (intList.size() > 1) {
        std::list<int> leftList;
        std::list<int> rightList;
        std::list<int>::iterator it = intList.begin();
        int middle = intList.size() / 2;

        for (int i = 0; i < middle; i++) {
            leftList.push_back(*it);
            it++;
        }

        for (int i = middle; i < static_cast<int>(intList.size()); i++) {
            rightList.push_back(*it);
            it++;
        }
        intList.clear();
        mergeSortList(leftList);
        mergeSortList(rightList);
        mergeList(leftList, rightList, intList);
    }
}

void PmergeMe::sortList() {
  mergeSortList(_sortedList);
}

const char *PmergeMe::WrongOrderException::what() const throw() {
	return "PmergeMe::WrongOrderException";
}
const char *PmergeMe::WrongCharException::what() const throw() {
	return "PmergeMe::WrongCharException";
}
// std::ostream &operator<<(std::ostream &o, PmergeMe const &rhs) { }