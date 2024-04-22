//
// Created by fvon-nag on 04.03.24.
//

#ifndef CPP07_ITER_H
#define CPP07_ITER_H

#include <stddef.h>
#include <iostream>
template <typename T>

void iter(T *array, size_t length, void (*f)(T &))
{
    for(size_t i = 0; i < length; i++)
        f(array[i]);
}
template <typename T>
void print(T &value){
    std::cout << value << std::endl;
}
#endif //CPP07_ITER_H
