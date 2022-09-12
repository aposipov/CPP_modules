//
// Created by user on 08.09.22.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip> //

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
		void add_new_contact(int i);
		void search();

	private:
		int get_count();
		int count ;
		Contact contact[8];
};

#endif
