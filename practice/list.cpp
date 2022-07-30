
#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# ifndef MAX_CONTACT
#  define MAX_CONTACT 8
# endif

#include <vector>
#include <iostream>

class Contact {

	int 		_index;
	static std::vector<Contact*> _instances;


	public:
		Contact(void); //constructor
		~Contact(void); //destructor

		/* Getters */
		int			getIndex(void) const;
		std::vector<Contact*> GetList(void) const;

		/* Setters */
};

#endif
/* static list */
std::vector<Contact*> Contact::_instances;

/* Constructor */
Contact::Contact(void) {
	static int	lastIndex = 0;
	this->_index = (lastIndex++) % 8;
	std::cout << "Constructor called" << std::endl;
	_instances.push_back(this);
}
/* Destructor */
Contact::~Contact(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* Getters */
int	Contact::getIndex(void) const {
	return this->_index;
}
std::vector<Contact*> Contact::GetList(void) const {
	return this->_instances;
}