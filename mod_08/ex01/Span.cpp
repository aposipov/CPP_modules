
#include "Span.hpp"

Span::Span()
{
	_N = 0;
	_vector.reserve(0);
}

Span::Span(unsigned int n)
{
	_N = n;
	_vector.reserve(n);
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span() {}

Span& Span::operator=(const Span &copy)
{
	if (this == &copy)
		return *this;
	_N = copy._N;
	_vector = copy._vector;
	return *this;
}

void Span::addNumber(int num)
{
	if (_vector.size() == _vector.capacity())
		throw NoSpaceException();
	_vector.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator start,
					 std::vector<int>::iterator end)
{
	while (start < end) {
		if (_vector.size() == _vector.capacity())
			throw NoSpaceException();
		_vector.push_back(*start);
		++start;
	}
}

int Span::shortestSpan()
{
	if (_vector.size() <= 1)
		throw NoSpanException();
	std::vector<int> tmp = _vector;
	std::sort(tmp.begin(), tmp.end());
	int dist = *(tmp.begin() + 1) - *tmp.begin();
	std::vector<int>::iterator it = tmp.begin();
	for (; it != tmp.end() - 1; ++it)
		dist = *(it + 1) - *it < dist ? *(it + 1) - *it : dist;
	return dist;
}

int Span::longestSpan()
{
	if (_vector.size() <= 1)
		throw NoSpanException();
	std::vector<int> tmp = _vector;
	std::sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}

std::vector<int> Span::getVec() const
{
	return _vector;
}

const char* Span::NoSpaceException::what() const throw()
{
	return "Stack is full";
}

const char* Span::NoSpanException::what() const throw()
{
	return "No span can be found";
}

std::ostream & operator<<(std::ostream & out, const Span & s)
{
	for (unsigned long i = 0; i < s.getVec().size(); i++)
	{
		if (i != 0)
			out << ", ";
		out << s.getVec()[i];
	}
	return out;
}
