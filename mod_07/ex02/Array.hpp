
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <exception>

template<typename T>
class Array {
public:
	Array();
	Array(unsigned int n);
	Array(Array const& copy);
	~Array();
	Array& operator=(Array const& copy);
	T& operator[](unsigned int n);
	unsigned int size();
	class RangeException : public std::exception {
		virtual const char* what() const throw();
	};

private:
	T* _arr;
	unsigned int _n;

};

#include "Array.tpp"

#endif
