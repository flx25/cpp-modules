//
// Created by Felix Von nagel on 12/13/23.
//

#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {

public:
    Cat();
    ~Cat();
    Cat(const Cat& other);
    void makeSound() const;
    using Animal::operator=;

};


#endif //CPP04_CAT_HPP
