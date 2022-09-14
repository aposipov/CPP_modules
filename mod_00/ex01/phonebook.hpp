
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>

class Phonebook {

public:

	Phonebook();
	~Phonebook();
	void 	add(int i);
	void 	search();
	int 	get_count();

private:

	int 	_count ;
	Contact _contact[8];
};

#endif
