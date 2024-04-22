//
// Created by fvon-nag on 04.03.24.
//

#ifndef CPP07_ARRAY_H
#define CPP07_ARRAY_H

#include <stddef.h>
#include <stdexcept>

template < typename T >
class Array {
private:
    T *_array;
    size_t _length;

public:
    Array() : _array(new T()), _length(0) {};
    Array(size_t size) : _array(new T[size]), _length(size) {};
    Array(Array &o) : _array(new T[o._length]), _length(o._length) {
        for(size_t i = 0; i < _length; i++)
            _array[i] = o._array[i];
    };
    ~Array() { delete[] _array; };
    Array& operator=(const Array &rhs) {
        if (this != &rhs)
        {
            delete _array;
            _array = new T[rhs._length];
            _length = rhs._length;
            for (size_t i = 0; i < _length; i++)
                _array[i] = rhs._array[i];
        }
        return *this;
    }

    T& operator[](size_t i){
        if (i >= _length)
            throw OutOfBoundsException();
        return _array[i];
    }

    size_t size(){
        return _length;
    }

    class OutOfBoundsException : public std::exception {
    public:
        virtual const char* what() const throw() { return "Index is out of bounds";}
    };

};



#endif //CPP07_ARRAY_H
