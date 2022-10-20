
#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T>
void iter(T *arr, size_t length, void f(T &))
{
	for (size_t i = 0; i < length; i++)
		f(arr[i]);
}

template<typename T>
void printArr(T& src)
{
	std::cout << " -> " << src << std::endl;
}

#endif
