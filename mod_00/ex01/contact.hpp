
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
	public:
		Contact();
		~Contact();

		void	add_contact();
		void	show_contact();

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif
