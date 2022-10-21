
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <exception>


template<typename T>
void easyfind(T container, int val)
{
	if ((std::find(container.begin(), container.end(), val)) != container.end())
		std::cout << "The val " << val << " existed" << std::endl;
	else
		throw "The val dont exist";
}

#endif
