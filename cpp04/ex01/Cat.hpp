//
// Created by Felix Von nagel on 12/13/23.
//

#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:
    Cat();
    ~Cat();
    void makeSound() const;

    Cat( const Cat& src );
    Cat& operator=( const Cat& src );
private:
    Brain* brain;
};


#endif //CPP04_CAT_HPP
