
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <exception>

class FindException : public std::exception {
	virtual const char* what() const throw() { return "Value not found"; }
};

template<typename T>
void easyfind(T container, int val)
{
	if ((std::find(container.begin(), container.end(), val)) != container.end())
	{
		std::cout << "The value " << val << " existed" << std::endl;
	}
	else
		throw FindException();
}

template <typename T>
void	print_cont(T container)
{
	for (typename T::iterator i = container.begin(); i != container.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

#endif
