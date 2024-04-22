//
// Created by fvon-nag on 18.03.24.
//

#ifndef CPP08_MUTANTSTACK_H
#define CPP08_MUTANTSTACK_H

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public:
    typedef typename std::stack<T>::container_type::iterator iterator;
  
  iterator begin() {return this->c.begin();}
  iterator end() {return this->c.end();}

};

#endif //CPP08_MUTANTSTACK_H
