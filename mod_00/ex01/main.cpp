
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
	int i = 1;
//	int exit_flag = 0;
	std::string input;

	print_header();
	while (input != "EXIT")
	{
		std::cout << "Enter the command: ";
		std::cin >> input;
		if (input == "ADD")
		{
			ph_book.add(i);
			if ( i == 8)
				i = 1;
			else
				i++;
		}
		else if (input == "SEARCH")
//		{
//			if ( i == 1)
//				std::cout << "Phonebook is empty!" << std::endl;
//			else
				ph_book.search();
//		}
		else if (input == "EXIT")
			std::cout << "Exit!" << std::endl;
//			exit_flag = 1;
		else
			std::cout << "Wrong command!" << std::endl;
	}
	return (0);
}