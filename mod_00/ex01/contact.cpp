//
// Created by user on 02.09.22.
//

#include "contact.hpp"

Contact::Contact()
{
	//std::cout << "Contact Call constructor\n";
	return ;
}

Contact::~Contact()
{
	//std::cout << "Contact Call destructor\n";
	return ;
}



void Contact::add_contact()
{
	//std::cout << this << std::endl;

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

void Contact::show_contact()
{
	std::cout << "first_name: " << this->first_name << std::endl;
	std::cout << "last_name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phone_number: " << this->phone_number << std::endl;
	std::cout << "darkest_secret: " << this->darkest_secret << std::endl;
}
