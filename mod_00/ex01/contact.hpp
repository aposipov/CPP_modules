
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {

public:

	Contact();
	~Contact();

	void	add_contact();
	void	show_contact();

	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);

private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
