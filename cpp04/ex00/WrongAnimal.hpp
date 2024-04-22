//
// Created by Felix Von nagel on 12/13/23.
//

#ifndef CPP04_WRONGANIMAL_HPP
#define CPP04_WRONGANIMAL_HPP


#include <string>
#include <iostream>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();

    WrongAnimal(const WrongAnimal& other);

    WrongAnimal& operator=(const WrongAnimal& other);

    virtual ~WrongAnimal();

    void makeSound() const;

    std::string getType() const;

};


#endif //CPP04_WRONGANIMAL_HPP
