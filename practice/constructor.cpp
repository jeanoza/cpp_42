

/* assignation lors de creation de l'instance */
Contact::Contact(int const num, std::string const name) : num(num), name(name) {
	static int _id = 0;
	std::cout << "Constructor called" << std::endl;
	this->id = ++_id;

	return ;
}
