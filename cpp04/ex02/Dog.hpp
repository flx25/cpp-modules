//
// Created by Felix Von nagel on 12/13/23.
//

#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:
    Dog();
    ~Dog();
    void makeSound() const;

    Dog( const Dog& src );
    Dog& operator=( const Dog& src );
private:
    Brain* brain;
};


#endif //CPP04_DOG_HPP
