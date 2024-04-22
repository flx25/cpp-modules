//
// Created by fvon-nag on 07.03.24.
//

#ifndef CPP08_EASYFIND_H
#define CPP08_EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>

class EasyFindException : public std::exception {
    public:
   const char *what() const throw(){
       return "Object not found in container";
   }
};

template <typename T>
bool easyfind(T &container, int tofind){
    if (std::find(container.begin(), container.end(), tofind) == container.end())
        throw EasyFindException();
    else
        return true;

}

#endif //CPP08_EASYFIND_H
