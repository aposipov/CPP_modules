//
// Created by user on 08.09.22.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
		void search();
		int get_count();
		void add_new_contact(int i);
		void show(int i);

		void start();

	private:
		int count ;
		Contact contact[8];
};

#endif
