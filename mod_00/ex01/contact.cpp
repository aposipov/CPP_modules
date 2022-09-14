
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
	std::cout << "Input first_name: ";
	std::cin >> this->_firstName;
	std::cout << "Input last_name: ";
	std::cin >> this->_lastName;
	std::cout << "Input nickname: ";
	std::cin >> this->_nickName;
	std::cout << "Input phone_number: ";
	std::cin >> this->_phoneNumber;
	std::cout << "Input darkest_secret: ";
	std::cin >> this->_darkestSecret;
}

void Contact::show_contact()
{
	std::cout << "first_name: ....... " << this->_firstName << std::endl;
	std::cout << "last_name: ........ " << this->_lastName << std::endl;
	std::cout << "nickname: ......... " << this->_nickName << std::endl;
	std::cout << "phone_number: ..... " << this->_phoneNumber << std::endl;
	std::cout << "darkest_secret: ... " << this->_darkestSecret << std::endl;
}

std::string Contact::get_first_name(void)
{
	return this->_firstName;
}

std::string Contact::get_last_name(void)
{
	return this->_lastName;
}

std::string Contact::get_nickname(void)
{
	return this->_nickName;
}
