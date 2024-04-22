//
// Created by Felix Von nagel on 12/13/23.
//

#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {

public:
    Dog();
    ~Dog();
    Dog(const Dog& other);
    void makeSound() const;
    using Animal::operator=;
};


#endif //CPP04_DOG_HPP
