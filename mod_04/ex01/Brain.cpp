
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain -> Default Constructor " << this << " called"
	<< std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "I think ...";
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain -> Copy Constructor " << this << " called"
	<< std::endl;
	for ( int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain -> Destructor " << this << " called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain -> Copy assignment operator called " << this
	<< " called"<< std::endl;
	for ( int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	return *this;
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i <= 99)
		return (_ideas[i]);
	return ("I dont have Ideas");
}