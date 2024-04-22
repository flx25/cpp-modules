//
// Created by fvon-nag on 14.03.24.
//

#include "Span.h"

Span::Span() {
    _size = 10;
    _vector = new std::vector<int>();
}

Span::Span(unsigned int n) {
    _size = n;
    _vector = new std::vector<int>();
}

Span::Span(const Span &other) {
    _size = other._size;
    _vector = new std::vector<int>(_size);
    for (std::vector<int>::iterator it = other._vector->begin(); it != other._vector->end(); ++it)
        _vector->push_back(*it);
}

Span &Span::operator=(const Span &other) {
        _size = other._size;
        delete _vector;
        _vector = new std::vector<int>(_size);
        for (std::vector<int>::iterator it = other._vector->begin(); it != other._vector->end(); ++it)
            _vector->push_back(*it);
        return *(this);
}

Span::~Span() {
    delete _vector;
}

void Span::addNumber(int num) {
    if (_vector->size() == _size)
        throw SpanFullException();
    _vector->push_back(num);
}

int Span::shortestSpan() {
    if (_vector->size() <= 1)
        throw NoteEnoughObjectsException();
    std::sort(_vector->begin(), _vector->end());
    int shortestSpan = (*_vector)[1] - (*_vector)[0];
    for (size_t i = 1; i + 1 < _vector->size(); i++)
    {
        if ((*_vector)[i+1] - (*_vector)[i] < shortestSpan)
            shortestSpan = (*_vector)[i+1] - (*_vector)[i];
    }
    return shortestSpan;
}

int Span::longestSpan() {
    if (_vector->size() <= 1)
        throw NoteEnoughObjectsException();
    std::sort(_vector->begin(), _vector->end());
    return (_vector->back() - _vector->front());
}

void Span::addRange(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    for (std::vector<int>::iterator it = first; it != last ; it++)
        addNumber(*it);
}