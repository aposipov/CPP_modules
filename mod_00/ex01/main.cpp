
#include "contact.hpp"
#include "phonebook.hpp"

void print_header()
{
	std::cout << "\t************************************" << std::endl;
	std::cout << "\t* Welcome to my awesome phonebook! *" << std::endl;
	std::cout << "\t* Use: ADD, SEARCH, EXIT           *" << std::endl;
	std::cout << "\t* ADD - add and save new contact   *" << std::endl;
	std::cout << "\t* SEARCH - show contact            *" << std::endl;
	std::cout << "\t* EXIT - close program             *" << std::endl;
	std::cout << "\t************************************" << std::endl;
}

int main()
{
	Phonebook ph_book;
	int i = 0;
	std::string input;

	print_header();
	while (input != "EXIT")
	{
		std::cout << "Enter the command: ";
		std::cin >> input;
		if (input == "ADD")
		{
			ph_book.add(i);
			if ( i == 7)
				i = 0;
			else
				i++;
		}
		else if (input == "SEARCH")
			ph_book.search();
		else if (input == "EXIT")
			std::cout << "Exit!" << std::endl;
		else
			std::cout << "Wrong command!" << std::endl;
	}
	return (0);
}