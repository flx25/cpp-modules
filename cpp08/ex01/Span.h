//
// Created by fvon-nag on 14.03.24.
//

#ifndef CPP08_SPAN_H
#define CPP08_SPAN_H

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <ctime>

class SpanFullException : public std::exception {
    public:
    const char *what() const throw(){
        return "Vector is allready full";
    }
};

class NoteEnoughObjectsException : public std::exception {
    public:
    const char *what() const throw(){
        return "There are not enough objects in the Vector to compare";
    }
};

class Span {
public:
    Span();
    Span(unsigned int n);
    Span(const Span& other);
    Span& operator=(const Span& other);

    void addNumber(int num);
    void addRange(std::vector<int>::iterator first, std::vector<int>::iterator last);
    int shortestSpan();
    int longestSpan();
    ~Span();
private:
    std::vector<int> *_vector;
    unsigned int _size;
};

#endif //CPP08_SPAN_H
