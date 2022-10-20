
#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_arr = new T[0];
	_n = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_n = n;
	_arr = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		_arr[i] = 0;
}

template<typename T>
Array<T>::Array(const Array<T> &copy)
{
	*this = copy;
}

template<typename T>
Array<T>::~Array()
{
	delete [] _arr;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &copy)
{
	if (this == &copy)
		return *this;
	_arr = new T[copy._n];
	_n = copy._n;
	for (unsigned int i = 0; i < _n; i++) {
		_arr[i] = copy._arr[i];
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n < 0 || n >= _n)
		throw RangeException();
	return _arr[n];
}


template<typename T>
unsigned int Array<T>::size()
{
	return _n;
}

template <typename T>
const char* Array<T>::RangeException::what() const throw() {

	return "Index is out of bounds";
}