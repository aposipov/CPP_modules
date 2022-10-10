
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

public:
	Brain();
	Brain(const Brain & copy);
	~Brain(); //
	Brain & operator=(const Brain & copy);

	std::string getIdea(int i) const;

private:
	std::string _ideas[100];

};


#endif
