//
// Created by user on 02.09.22.
//

#include "contact.hpp"

Contact::Contact()
{
	std::cout << "Call constructor\n";
	return ;
}

Contact::~Contact()
{
	std::cout << "Call detructor\n";
	return ;
}

void Contact::add_contact()
{
	std::cout << "Input first_name: ";
	std::cin >> first_name;

	std::cout << "Input last_name: ";
	std::cin >> last_name;

	std::cout << "Input nickname: ";
	std::cin >> nickname;

	std::cout << "Input phone_number: ";
	std::cin >> phone_number;

	std::cout << "Input darkest_secret: ";
	std::cin >> darkest_secret;
}

