
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {

public:
	Span();
	Span(unsigned int n);
	Span(Span const & copy);
	~Span();
	Span& operator=(Span const & copy);

	void	addNumber(int num);
	void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
	int		shortestSpan();
	int		longestSpan();
	std::vector<int> getVec() const;

	class NoSpaceException : public std::exception {
		virtual const char* what() const throw();
	};

	class NoSpanException : public std::exception {
		virtual const char* what() const throw();
	};

private:
	std::vector<int> _vector;
	unsigned int _N;
};

std::ostream & operator<<(std::ostream & out, const Span & s);

#endif
