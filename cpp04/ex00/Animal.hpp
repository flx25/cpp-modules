//
// Created by Felix Von nagel on 12/12/23.
//

#ifndef CPP04_ANIMAL_HPP
#define CPP04_ANIMAL_HPP
#include <string>
#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal();

    Animal(const Animal& other);

    Animal& operator=(const Animal& other);

    virtual ~Animal();

    virtual void makeSound() const;

    std::string getType() const;

};

#endif //CPP04_ANIMAL_HPP
