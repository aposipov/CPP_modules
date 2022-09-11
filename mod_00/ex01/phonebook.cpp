//
// Created by user on 08.09.22.
//

#include "phonebook.hpp"
#include <iomanip> //


Phonebook::Phonebook()
{
	//std::cout << "Phonebook Call constructor\n";
	this->count = 0;
	return ;
}

Phonebook::~Phonebook()
{
	//std::cout << "Phonebook Call destructor\n";
	return ;
}

int Phonebook::get_count()
{
	return this->count;
}

void Phonebook::add_new_contact(int i)
{
	std::string str;

	if (this->get_count() <= 7)
		this->count += 1;
	this->contact[i].add_contact();
}

std::string change_len(std::string str)
{
	std::string new_str;

	new_str = str;
	if (str.length() > 10)
	{
		new_str.insert(9, ".");
		new_str = new_str.substr(0, 10);
	}
	return new_str;
}

void Phonebook::show(int i)
{
	contact[i].show_contact();
}

