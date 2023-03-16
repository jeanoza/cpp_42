#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const std::vector<int> &unsortedVector) {
  init(unsortedVector);
}
PmergeMe::PmergeMe(const PmergeMe &inst) {
  _sortedList = inst._sortedList;
  _sortedVector = inst._sortedVector;
  // for(std::vector<int>::const_iterator it = inst._sortedVector.begin(); it != inst._sortedVector.end(); ++it){
  //   _sortedVector.push_back(*it);
  // }
  // for(std::list<int>::const_iterator it = inst._sortedList.begin(); it != inst._sortedList.end(); ++it){
  //   _sortedList.push_back(*it);
  // }
}
PmergeMe::~PmergeMe(){}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
  _sortedList = rhs._sortedList;
  _sortedVector = rhs._sortedVector;
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


void PmergeMe::insertSortVector(int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = _sortedVector[i];
        int j = i - 1;
        while (j >= left && _sortedVector[j] > key) {
            _sortedVector[j+1] = _sortedVector[j];
            j--;
        }
        _sortedVector[j+1] = key;
    }
}

void PmergeMe::mergeVector(int left, int middle, int right)
{
    int i = left, j = middle + 1, k = 0;
    std::vector<int> temp(right - left + 1);

    while (i <= middle && j <= right) {
        if (_sortedVector[i] <= _sortedVector[j]) 
            temp[k] = _sortedVector[i++];
				else
            temp[k] = _sortedVector[j++];
        k++;
    }

    while (i <= middle)
			temp[k++] = _sortedVector[i++];
    while (j <= right)
			temp[k++] = _sortedVector[j++];

    for (i = left, k = 0; i <= right; i++, k++)
			_sortedVector[i] = temp[k];
}

void PmergeMe::mergeInsertSortVector(int left, int right, int k)
{
    if (left < right) {
				if (right - left <= k){
					insertSortVector(left, right);
				}
				else {
					int middle = left + (right - left) / 2;
					mergeInsertSortVector(left, middle, k);
					mergeInsertSortVector(middle + 1, right, k);
					mergeVector(left, middle, right);
				}
    }
}

void PmergeMe::sortVector(int k) {
  mergeInsertSortVector(0, _sortedVector.size() - 1, k);
}

void PmergeMe::insertSortList(std::list<int>& currentList) {
	for (std::list<int>::iterator it = ++currentList.begin(); it != currentList.end(); ++it) {
		int value = *it;
		std::list<int>::iterator insertion_pos = currentList.begin();
		while (insertion_pos != it && *insertion_pos <= value) {
				++insertion_pos;
		}
		currentList.erase(it);
		currentList.insert(insertion_pos, value);
	}
}

void PmergeMe::mergeSortList(std::list<int>& currentList, int k)
{
	if (static_cast<int>(currentList.size()) <= 1)
		return;

	if (static_cast<int>(_sortedList.size()) <= k) {
			insertSortList(_sortedList);
	} else {
		std::list<int> left, right;

		int mid = static_cast<int>(currentList.size()) / 2;
		std::list<int>::iterator it = currentList.begin();
		for (int i = 0; i < mid; ++i) {
				left.push_back(*it);
				++it;
		}
		for (int i = mid; i < static_cast<int>(currentList.size()); ++i) {
				right.push_back(*it);
				++it;
		}

		mergeSortList(left, left.size() / 2);
		mergeSortList(right, right.size() / 2);

		currentList.clear();
		std::list<int>::iterator l_it = left.begin();
		std::list<int>::iterator r_it = right.begin();
		while (l_it != left.end() && r_it != right.end()) {
				if (*l_it <= *r_it) {
						currentList.push_back(*l_it);
						++l_it;
				} else {
						currentList.push_back(*r_it);
						++r_it;
				}
		}
		while (l_it != left.end()) {
				currentList.push_back(*l_it);
				++l_it;
		}
		while (r_it != right.end()) {
				currentList.push_back(*r_it);
				++r_it;
		}
	}

}

void PmergeMe::sortList(int k) {
	mergeSortList(_sortedList, k);
}

void PmergeMe::printVector() {
  int size = _sortedVector.size();
  std::cout << GRN << "<std::vector>" << std::endl;
	for(int i = 0; i < size; ++i) {
		std::cout << _sortedVector[i] << " ";
	}
	std::cout << DFT << std::endl;
}
void PmergeMe::printList() {
  std::cout << YEL << "<std::list>" << std::endl;
	for(std::list<int>::const_iterator it = _sortedList.begin(); it != _sortedList.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << DFT << std::endl;
}
// std::ostream &operator<<(std::ostream &o, PmergeMe const &rhs) { }