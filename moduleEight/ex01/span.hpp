#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class span
{
private:
    std::vector<int> _vecNa;
    unsigned int              _max;
public:
///Constructors
    span(void);
    span(int max);
    span(span const &oldSpan);
///Deconstructor
    ~span();
///Operator Overload
    span &operator=(span const &toCopy);
///Span functions
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    void addLotzaNumbaz(int multiple);
    void printNums(void);
///Exception Classes
    class maxReached: public std::exception {
        const char *what() const throw();
    };
    class maxAintEnuf: public std::exception {
        const char *what() const throw();
    };
};

#endif