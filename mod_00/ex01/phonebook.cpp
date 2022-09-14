
#include "phonebook.hpp"

Phonebook::Phonebook()
{
	//std::cout << "Phonebook Call constructor\n";
	this->_count = 1;
	return ;
}

Phonebook::~Phonebook()
{
	//std::cout << "Phonebook Call destructor\n";
	return ;
}

int Phonebook::get_count()
{
	return this->_count;
}

void Phonebook::add(int i)
{
	std::string str;
	if (this->get_count() <= 8)
		this->_count += 1;
	this->_contact[i].add_contact();
}

std::string check_len(std::string str)
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

void Phonebook::search()
{
	int i = 1;
	int index = this->get_count();
	std::string str;

	std::cout << "+----------+----------+----------+----------+\n";
	std::cout << "|" << std::setw(10) << "index" << "|" \
		<< std::setw(10) << "first name" << "|"\
		<< std::setw(10) << "last name" << "|" \
		<< std::setw(10) << "nickname" << "|\n";
	std::cout << "+----------+----------+----------+----------+\n";
	while (index > i)
	{
		std::cout << "|" << std::setw(10) << i << "|" \
 			<< std::setw(10) << check_len(_contact[i].get_first_name()) << "|" \
 			<< std::setw(10) << check_len(_contact[i].get_last_name()) << "|" \
 			<< std::setw(10) << check_len(_contact[i].get_nickname()) << "|" \
 			<< std:: endl;
		std::cout << "+----------+----------+----------+----------+\n";
		i++;
	}
	std::cout << "Enter index of contact to show more info: ";
	if (std::cin >> i)
	{
		if (i >= 1 && i <= index)
			this->_contact[i].show_contact();
		else
			std::cout << "Index is not correct!" << std:: endl;
	}
	else
		std::cout << "std::cin error" << std:: endl;
}